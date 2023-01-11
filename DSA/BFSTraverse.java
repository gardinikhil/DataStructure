package com.test;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

class GraphBFS{
	int vertices;
	List<Integer> adjList[];
	boolean visited[];
	
	GraphBFS(int vertices){
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
	
	public void BFS(int start) {
		visited[start] = true;
		LinkedList<Integer> queue = new LinkedList<>();
		queue.add(start);
		while(queue.size() != 0 ) {
			int s = queue.poll();
			System.out.print(s + " ");
			Iterator itr = adjList[s].iterator();
			while(itr.hasNext()) {
				int adj = (int) itr.next();
				if(!visited[adj]) {
					visited[adj] = true;
					queue.add(adj);
				}
			}
		}
	}
}
public class BFSTraverse {
	public static void main(String[] args) {
		GraphBFS g = new GraphBFS(5);
		g.addEdge(0, 1);
		g.addEdge(0, 2);
		g.addEdge(1, 0);
		g.addEdge(2, 0);
		g.addEdge(2, 3);
		g.addEdge(3, 2);
		g.addEdge(3, 4);
		g.addEdge(4, 3);
		
		System.out.print("BFS -> ");
		g.BFS(3);
	}
}
