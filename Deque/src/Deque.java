
public class Deque {
	
	private class Node {
		public int value;
		public Node next;
		
		public Node(int v, Node n) {
			value = v;
			next = n;
		}
	}
	
	private Node head;
	private Node tail;
	
	public boolean isEmpty() {
		return head == null;
	}
	
	public void print() {
		Node n = head;
		while (n != tail) {
			System.out.println(n.value);
			n = n.next;
		}
		System.out.println(n.value);
	}
	
	public void insertElement(int value, boolean fromHead) {
		if (isEmpty()) {
			tail = head = new Node(value, null);
		} else {
			if (fromHead) {
				head = new Node(value, head);
			} else {
				tail.next = new Node(value, null);
				tail = tail.next;
			}
		}
	}
	
	public void deleteElement(boolean fromHead) {
		if (!isEmpty()) {
			if (fromHead) {
				head = head.next;
			} else {
				Node n = head;
				while (n.next != tail) 
					n = n.next;
				n.next = null;
				tail = n;
			}
		}
	}
	
	public int getElement(boolean fromHead) {
		if (!isEmpty()) {
			if (fromHead) {
				return head.value;
			} else {
				return tail.value;
			}
		}
		
		return 0;
	}
}
