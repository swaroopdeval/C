#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxVertices 1000
#define maxEdges 1000000
int parent[maxVertices];

typedef struct Edge
{
        int from,to;
        float weight;
}Edge;
Edge E[maxEdges],ans[maxVertices];

int compare(const void *x, const void *y)
{
    float w1 = (*(Edge *)x).weight;
    float w2 = (*(Edge *)y).weight;
    int f1 = (*(Edge *)x).from;
    int f2 = (*(Edge *)y).from;
    int t1 = (*(Edge *)x).to;
    int t2 = (*(Edge *)y).to;

    if(w1-w2!=0){if(w1-w2<0) return -1; else return 1;}
    else if(f1-f2!=0) return f1-f2;
    else  return t1-t2;
}

int Find(int vertex)
{
        if(parent[vertex]==-1)return vertex;
        return parent[vertex] = Find(parent[vertex]); /* Finding its parent as well as updating the parent 
                                                         of all vertices along this path */
}
void Union(int parent1,int parent2)
{
        parent[parent1] = parent2;
}
void Kruskal(int vertices,int edges)
{
        int i=0;
        float total_weight=0;
	//printf("%d\n",edges);
        qsort(E,edges,sizeof(Edge),compare);
        //for(i=0;i<edges;i++) printf("%d %d %f\n",E[i].from,E[i].to,E[i].weight);
        int totalEdges = 0,from,to;
        float weight;
        Edge current;
        i = 0;
        while(totalEdges < vertices -1)
        {
                if(i==edges)
                        exit(0);
                current = E[i++];
                from = current.from;
                to = current.to;
                weight=current.weight;
                int parent1 = Find(from);
                int parent2 = Find(to);
                if(parent1!=parent2)
                {
                        //graph[from][to] = weight;
                        ans[totalEdges].from = from; 
                        ans[totalEdges].to = to; 
                        ans[totalEdges].weight = weight;
                        total_weight+=weight;
                        Union(parent1,parent2);
                        totalEdges++;
                }
        }
        printf("%.2f\n",total_weight);

        for(i=0;i<vertices-1;i++) printf("%d %d %.2f\n",ans[i].from,ans[i].to,ans[i].weight);
}

int main()
{
        int vertices,edges=0;
        scanf("%d",&vertices);
        int i=0;
        int from,to,temp;
	float weight;
        while(scanf("%d %d %f",&from,&to,&weight)!=EOF){
		if(to<from){
			temp = to;
			to = from;
			from = temp;
		}
                E[i].from = from; 
                E[i].to = to; 
                E[i].weight = weight;
                edges++;
                i++;
        }
        /* Finding MST */
        //Kruskal(vertices,edges);
        /* for(i=0;i<maxVertices;i++)
            for(j=0;j<maxVertices;j++)
                             graph[i][j] = -1;
*/
        for(i=0;i<vertices;i++)
                parent[i]=-1;

        Kruskal(vertices,edges);
        
       return 0;
}
