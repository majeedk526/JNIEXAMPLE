package jnipackage;

public class JavaImpl {

	public native void printMsg(String msg);
	public native int getSquare(int num);
	public native int[] getSquares(int[] nums);
			
	static {System.loadLibrary("CImpl");}
	
	public static void main(String[] args) {
		
		JavaImpl jimpl = new JavaImpl();
		
		jimpl.printMsg("Message from java");
		System.out.println(jimpl.getSquare(5));
		
		int sqrs[] = jimpl.getSquares(new int[]{1,2,3,4,5,6});
		for(int i=0; i<sqrs.length; i++){
			System.out.print(sqrs[i] + "\t");
		}
		System.out.println("");
	}

}
