package com.test;

import java.util.LinkedList;
import java.util.List;

class Graph{
	int vertices;
	List<Integer> adjList[];
	
	Graph(int vertices){
		this.vertices = vertices;
		adjList = new LinkedList[vertices];
		
		for(int i=0;i<vertices;i++) {
			adjList[i] = new LinkedList<>();
		}
	}
	
	public void addEdge(int src,int dest) {
		adjList[src-1].add(dest);
	}
	
	public void showGraph() {
		for(int i=0;i<vertices;i++) {
			System.out.println("Vertex "+(i+1)+"->" + adjList[i]);
		}
	}
}
public class GraphImplementation {
	public static void main(String[] args) {
		Graph g = new Graph(5);
		g.addEdge(5, 2);
		g.addEdge(2, 1);
		g.addEdge(2, 4);
		g.addEdge(2, 3);
		g.addEdge(2, 5);
		g.addEdge(1, 2);
		g.addEdge(1, 3);
		g.addEdge(3, 1);
		g.addEdge(3, 2);
		g.addEdge(3, 4);
		g.addEdge(4, 3);
		g.addEdge(4, 2);
		
		g.showGraph();
	}
}
