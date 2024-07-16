import java.util.*;

public class Codeforces_721A_V2{
    public static void main(String[] args){
        Scanner key=new Scanner(System.in);
        int t=key.nextInt();
        char[] a=new char[t];
        char prev=' ';
        int countBStacks=0;
        for(int i=0; i<t; ++i){
            a[i]=key.next().charAt(0);
            if(a[i]=='B' && (prev==' ' || prev=='W') ){
                countBStacks++;
                prev=a[i];
            }
            else{
                prev=a[i];
            }
        }
        
        System.out.println(countBStacks);
        
        int countB=0;
        prev=' ';
        
        for(int i=0; i<t; ++i){
            if(a[i]=='B'){
                countB++;
                prev=a[i];
                if(i==t-1){
                    System.out.print(countB+" ");
                }
            }
            else if(a[i]=='W' && prev=='B'){
                System.out.print(countB+" ");
                countB=0;
                prev=a[i];
            }
        }
        
    }
}