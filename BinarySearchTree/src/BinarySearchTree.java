
public class BinarySearchTree {
	
	private class Node {
		public int value;
		public Node left;
		public Node right;
		
		public Node(int v) {
			value = v;
		}
	}
	
	private Node head;
	
	public boolean search(int v) {
		if (search(v, head) == null)
			return false;
		else
			return true;
	}
	
	private Node search(int v, Node head) {
		if (head == null || head.value == v)
			return head;
		else if (v < head.value)
			return search(v, head.left);
		else
			return search(v, head.right);
	}
	
	public void insert(int value) {
		if (head == null)
			head = new Node(value);
		else
			insert(value, head);
	}
	
	private void insert(int v, Node at) {
		if (v < at.value) {
			if (at.left == null)
				at.left = new Node(v);
			else
				insert(v, at.left);
		} else {
			if (at.right == null)
				at.right = new Node(v);
			else
				insert(v, at.right);
		}
	}
	
	public void delete(int value) {
		delete(value, head);
	}
	
	private void delete(int v, Node at) {
		if (at == null)
			return;
	}
	
	public void print() {
		print(head);
	}
	
	private void print(Node start) {
		if (start == null)
			return;
		print(start.left);
		System.out.println(start.value);
		print(start.right);
	}
}
