
import java.util.*;
public class LCM {

    public static void main(String []args){
        int a=8,b=10,hcf=1;
        for(int i=1;i<=a||i<=b;i++){
            if(a%i==0&&b%i==0)
                hcf=i;
        }
System.out.println("the number of lcm of two numbers"+" "+hcf);
        

        
        int lcm;

System.out.println(a*b/hcf+" ");
    }
    
}
