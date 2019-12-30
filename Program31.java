import java.util.Scanner;

public class Program31 {

		int x,y;
		static int r;
		
		public void init()
		{
			Scanner s=new Scanner(System.in);
			System.out.println("enter value for x and y");
			 x=s.nextInt();
			 y=s.nextInt();
		}
			
	
		public void  add()
		{
			int add=x+y;
			r=add;
			System.out.println("Addition is"+add);
		}
			
		public void multiply()
		{
			float mul=x*y;
			r+=mul;
			System.out.println("multiplication is"+mul);
		}
		public void power()
		{
			double p=Math.pow(x,y);
			r+=p;
			System.out.println("power of x and y is"+p);
		}
		
		public void display()
		{
			System.out.println("value of R is"+r);
			
		}
	
		public static void main(String a[])
		{
			Program31 p=new Program31();
			p.init();
			p.add();
			p.multiply();
			p.power();
			p.display();
		}
}

