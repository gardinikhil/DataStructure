package com.test;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

class GraphDFS{
	int vertices;
	List<Integer> adjList[];
	boolean visited[];
	
	GraphDFS(int vertices){
		this.vertices = vertices;
		adjList = new LinkedList[vertices];
		visited = new boolean[vertices];
		
		for(int i=0;i<vertices;i++) {
			adjList[i] = new LinkedList<>();
		}
	}
	
	public void addEdge(int src,int dest) {
		adjList[src].add(dest);
	}
	
	public void showGraph() {
		for(int i=0;i<vertices;i++) {
			System.out.println("Vertex "+(i)+"->" + adjList[i]);
		}
	}
	
	public void DFS(int start) {
		visited[start] = true;
		System.out.print(start+ " ");
		Iterator itr = adjList[start].iterator();
		while(itr.hasNext()) {
			int val = (int) itr.next();
			if(!visited[val]) {
				DFS(val);
			}
		}
	}
}
public class DFS {
	public static void main(String[] args) {
		GraphDFS g = new GraphDFS(5);
		g.addEdge(0, 1);
		g.addEdge(0, 2);
		g.addEdge(1, 0);
		g.addEdge(2, 0);
		g.addEdge(2, 3);
		g.addEdge(3, 2);
		g.addEdge(3, 4);
		g.addEdge(4, 3);
		
		System.out.print("DFS -> ");
		g.DFS(0);
	}
}
