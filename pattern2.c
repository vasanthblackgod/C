import java.util.*;
public class pattern
{
public static void main(String args[])
{
Scanner inp=new Scanner(System.in);
String str = inp.nextLine();
for(int i=0;i<str.length()-1;i++)
{
System.out.print("*");
}
System.out.print(str);
for(int j=0;j<str.length()-1;j++)
{
System.out.print("*");
}
}
}
