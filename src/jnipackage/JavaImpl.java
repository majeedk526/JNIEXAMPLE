package jnipackage;

public class JavaImpl {

	public native void printMsg(String msg);
	public native int getSquare(int num);
	public native int[] getSquares(int[] nums);
			
	static {System.loadLibrary("CImpl");}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
	}

}
