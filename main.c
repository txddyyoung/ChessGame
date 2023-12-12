#include <stdio.h>
#include <stdlib.h>


#define BOARD_SIZE 8

struct Node
{
  //  int posX;
   // int posY;
      char symbol;
    int vertex;
   // struct Node *edge;
      char icon;
//    bool isFull;

};
typedef struct Node chkrpiece;

 struct Graph
{
    int numofnodes;
    chkrpiece ***tiles;

};
typedef struct Graph DirGraph;



chkrpiece *create_tile(int V)
{
      chkrpiece *new_piece = malloc(sizeof(chkrpiece));
//    new_piece->vertex = V;
      return new_piece;


}

int *create_board(int num_of_tiles)
{
    DirGraph *newgraph = malloc(sizeof(DirGraph));
    newgraph->numofnodes = num_of_tiles;

    newgraph->tiles = malloc( num_of_tiles * sizeof(chkrpiece)); //sets the size of tile array to be the product of the size of the node struct and the number of tiles

    for (int tileX = 0; tileX <= num_of_tiles; tileX++)
    {
        newgraph->tiles[tileX] = malloc( num_of_tiles * sizeof(chkrpiece));
	for (int tileY = 0; tileY < num_of_tiles; tileY++)
        {
            newgraph->tiles[tileX][tileY] = create_tile(0); // Initialize each tile
        }
    }

    return newgraph;



}

void *add_edge(DirGraph *graph, int start, int end)
{
     graph->tiles[start][end]->vertex = 1;
     //you can expand this to change stuff like the piece's icon or maybe even it's status from a regular one to a king


}

int print_graph(DirGraph *graph)
{
    for (int i = 0; i < graph->numofnodes; i++)
    {
        for (int j = 0; j < graph->numofnodes; j++)
        {
            printf(" %d ", graph->tiles[i][j]->vertex);
        }
        printf("\n");
    }
}

int main()
{
  //  printf("\n When the impostor is sus \n");
    DirGraph *new_graph = create_board(BOARD_SIZE);
    add_edge(new_graph,1,1);

    printf("%d",new_graph->tiles[1][1]->vertex);
   // print_graph(new_graph);


    free(new_graph);



}


