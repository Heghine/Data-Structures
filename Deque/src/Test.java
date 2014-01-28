
public class Test {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Deque q = new Deque();
		q.insertElement(5, true);
		q.insertElement(7, true);
		q.insertElement(6, false);
		q.insertElement(3, true);
		q.print();
		
		System.out.println();
		
		q.deleteElement(true);
		q.print();
		
		System.out.println();
		
		System.out.println(q.getElement(false));
	}

}
