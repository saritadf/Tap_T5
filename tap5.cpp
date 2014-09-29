#include <iostream>
#include <istream>
#include <vector>
#include <queue>
#include <list>
#include<string.h>
#include<string>
#include<math.h>

using namespace std;
	char Mapa[10][10];
	int iinicial, jinicial;

struct NODO{
int id;
int i;
int j;
char valor;
int costo;
int heuristic;
int f;
NODO * parent;

} ;
/*

int GetNodeHeuristic(NODO nodonuevo){return 0;}


bool Astar()
{
    priority_queue<NODO> OPEN;
    list <NODO> CLOSE;

	NODO node;

    node.costo = 0;
    node.heuristic = GetNodeHeuristic( node );
    node.f = node.costo + node.heuristic;
    node.parent = NULL;
	node.char=Mapa[iinicial][jinicial];
    node.id=0;
    CLOSE.insert(CLOSE.begin(),node);

	while(OPEN.empty()){
		node = OPEN.top();
		OPEN.pop();
		if (node.valor='F') {
			//construct_path();
			printf("GaNASTE!!!!!!");
			return 1;
		}


		NodePushSuccessors( OPEN, CLOSE, node ); // see below
		CLOSE.push_back(node); // as we have now examined this node
	}

	return 0;

}
bool BuscarNodo(list<NODO> CLOSE, NODO X ){

	return 0;  }

void NodePushSuccessors( priority_queue<NODO> OPEN, list<NODO> CLOSE, NODO parent_node )
{
		NODO nodonuevo;

		//por cada regla que se puede aplicar crear un nodonuevo
		//{
			nodonuevo.costo = 1+ parent_node.costo;
			nodonuevo.heuristic = GetNodeHeuristic(nodonuevo);
			nodonuevo.f = nodonuevo.costo + nodonuevo.heuristic;

			// OJO: O(1) si es posible
			bool existe= BuscarNodo(CLOSE, nuevonodo);
			if (nuevonodo.i== the nodonuevo is on CLOSED but the node on CLOSED has a lower ’f’
			{

			}
		// OJO: O(1) si es posible
			if the nodonuevo is on OPEN but the node on OPEN has a lower ’f’
			{
				continue;
			}
				remove nodonuevo from the OPEN list if it is on it
				remove nodonuevo from the CLOSED list if it is on it
				nodonuevo.parent = parent_node
				OPEN.insert(nodonuevo)
		//}
}
*/
int main( )
{
	char entrada[100];
	int x=0;
	FILE *f;
	f=fopen("entrada.txt","r");

	fgets(entrada, sizeof entrada, f);
	int tam=strlen(entrada);
	tam=pow(tam,0.5);
	printf(" %i \n", tam);
	fclose(f);
	int a;

	for (int i=0; i<tam;i++)
	{

		for (int j=0; j<tam;j++)
		{
			Mapa[i][j]=entrada[x];

			if (entrada[x]=='J'){
				iinicial=i;
				jinicial=j;
			}
			x++;

		}
	}
	//IMPRIMIR MATRIZ
   for (int i=0; i<tam;i++)
	{
		for (int j=0; j<tam;j++)
		{
			printf ("%c ",Mapa[i][j]);
		}
		printf("\n");
	}

   printf ("%i %i ",iinicial,jinicial);
  	scanf_s("%i",&a);
return 0;
}
/*

/*
----LIST EXAMPLE-------

main()
10
{
11
   list<int> L;
12
   L.push_back(0);              // Insert a new element at the end
13
   L.push_front(0);             // Insert a new element at the beginning
14
   L.insert(++L.begin(),2);     // Insert "2" before position of first argument
15
                                // (Place before second argument)
16
   L.push_back(5);
17
   L.push_back(6);
18

19
   list<int>::iterator i;
20

21
   for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
22
   cout << endl;
23
   return 0;
24
}
Output: 0 2 0 5 6
*/

