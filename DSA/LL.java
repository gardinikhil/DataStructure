package com.test;


public class LL {
	
	private Node head;
	private int size;
	
	LL(){
		this.size = 0;
	}
	
	class Node{
		int data;
		Node next;
		
		Node(int data){
			this.data = data;
			this.next = null;
		}
	}
	
	public void addFirst(int data) {
		size++;
		Node newNode = new Node(data);
		if(head == null) {
			head = newNode;
			return;
		}
		newNode.next = head;
		head = newNode;
	}
	
	public void addLast(int data) {
		size++;
		Node newNode = new Node(data);
		if(head == null) {
			head = newNode;
			return;
		}
		Node temp = head;
		while(temp.next != null) {
			temp = temp.next;
		}
		temp.next = newNode;
	}
	
	public void showList() {
		Node temp = head;
		while(temp != null) {
			System.out.print(temp.data + " --> ");
			temp=temp.next;
		}
		System.out.println("NULL");
	}
	
	public int delete(int data) {
		if(head == null) {
			return -1;
		}
		Node temp = head;
		size--;
		if(temp.data == data) {
			head=temp.next;
			temp.next = null;
			return 1;
		}
		while(temp.next != null) {
			if(temp.next.data == data) {
				temp.next = temp.next.next;
				return 1;
			}
			temp=temp.next;
		}
		return -1;
	}
	
	public void reverse() {
		if(head == null) {
			System.out.println("List is empty..");
			return;
		}
		if(head.next == null) {
			return;
		}
		Node curr = head.next;
		if(curr.next == null) {
			curr.next = head;
			head.next = null;
			head = curr;
			return;
		}
		
		Node prev = head;
		Node next = curr.next;
		
		while(next != null) {
			curr.next = prev;
			prev = curr;
			curr = next;
			next = next.next;
		}
		curr.next = prev;
		head.next = null;
		head = curr;
	}
	
	public int getSize() {
		return size;
	}
	
	public Node getHead() {
		return head;
	}
	public static void main(String[] args) {
		LL list = new LL();
		list.addFirst(3);
		list.addFirst(4);
//		list.addLast(5);
//		list.addLast(1);
//		list.delete(4);
		list.showList();
		System.out.println("Size: "+list.getSize());
		
		list.reverse();
		list.showList();
	}
}
