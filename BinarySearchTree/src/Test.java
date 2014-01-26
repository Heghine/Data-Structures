
public class Test {

	public static void main(String[] args) {
		BinarySearchTree tree = new BinarySearchTree();
		
		tree.insert(5);
		tree.insert(2);
		tree.insert(7);
		
		System.out.println(tree.search(4));
		tree.print();
	}

}
