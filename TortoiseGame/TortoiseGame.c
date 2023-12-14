#include <stdio.h>
#include <stdlib.h>
enum grid{Empty, Tortoise, Berry, Pit};
enum states{Alive, FellDown, AteAllBerries, EnergyDepleted};

int gameState = Alive;
int *mapTile;
const char tiles[4] = {'_', '@', '*', 'O'};
int counter = 1;
int energy = 20;
int berries = 0;
int mapSize, xTort, yTort, emptyGrids;

int main(){
    srand(time(NULL));    

    startGame();
    draw();

    while(gameState == Alive){ 
        action();
        draw();
    }
    switch(gameState) 
    {
    case FellDown:
        printf("You fell down!! GAME OVER");
        printf("\n\n-------------------------\n");
        break;
    case AteAllBerries:
        printf("You ate all the berries! CONGRAGULATIONS!!");
        printf("\n\n-------------------------\n");
        break;
    case EnergyDepleted:
        printf("Out of energy!! GAME OVER");
        printf("\n\n-------------------------\n");
        break;
    }

    free(mapTile);
}

void action(){
    char act, dir;
    fflush(stdin);
    printf("Please enter an action: ");
    scanf("%c %c", &act, &dir);
    printf("\n\n-------------------------\n");

    int x = xTort, y = yTort;
    
    switch (dir)
    {
    case 'E':
        x++;
        break;
    case 'N':
        y--;
        break;
    case 'W':
        x--;
        break;
    case 'S':
        y++;
        break;
    default:
    return;
    }
    if(x >= mapSize || x < 0 || y >= mapSize || y < 0){
        printf("Out of field\n");
        return;
    }
    int tileType = mapTile[y * mapSize + x];

    if(act == 'M'){
        if(tileType == Berry) return;
        if(tileType == Pit){
            mapTile[yTort * mapSize + xTort] = Empty;
            gameState = FellDown;
            counter++;
            energy--;
            return;
        }
        mapTile[yTort * mapSize + xTort] = Empty;
        mapTile[y * mapSize + x] = Tortoise;
        yTort = y, xTort = x;
        energy--;
    }
    else if(act == 'E'){
        if(tileType == Pit || tileType == Empty) return;
        energy += 20;
        berries--;
        mapTile[y * mapSize + x] = Empty;
    }
    else return;
    if(berries == 0) gameState = AteAllBerries;
    if(energy == 0) gameState = EnergyDepleted;

    counter++;
}

void startGame(){
    printf("Welcome to the Tortoise Game.\nControls:'M D', 'E D' ---> M means Move, E means Eat. D means direction(N E S W).\nTo move east you need to write M E\n");
    printf("Please specify the size of the board: ");
    scanf("%d", &mapSize);

    mapTile = (int *)calloc(mapSize*mapSize, sizeof(int));

    emptyGrids = mapSize*mapSize;    
    berries = ceil(mapSize*mapSize*0.15);
    for(int i = 0; i < berries; i++) placeItem(Berry);
    for(int i = 0; i < mapSize*mapSize*0.05; i++) placeItem(Pit);
    placeItem(Tortoise);
}

void draw(){
    printf("\nTime = %d Energy level: %d\n\n", counter, energy);
    for(int i = 0; i < mapSize; i++){
        for(int j = 0; j < mapSize; j++){
            printf("%c ", tiles[mapTile[i * mapSize + j]]);
        }
        printf("\n");
    }
    printf("\n");
}

void placeItem(int item){

    int x = rand() % emptyGrids;

    for(int i = 0; i < mapSize; i++){
        for(int j = 0; j < mapSize; j++){
            
            if(mapTile[i * mapSize + j] == Empty){
                if(!x){
                    mapTile[i * mapSize + j] = item;
                    emptyGrids--;

                    if(item == Tortoise){
                        xTort = j;
                        yTort = i;
                    }
                }
                x--;
            }
        }
    }
}
