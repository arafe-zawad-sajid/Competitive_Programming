import java.util.*;

public class Codeforces_721A{
    public static void main(String[] args){
        Scanner key=new Scanner(System.in);
        int t=key.nextInt();
        char[] a=new char[t];
        char prev=' ';
        int countB=0;
        for(int i=0; i<t; ++i){
            a[i]=key.next().charAt(0);
            if(i==0){
                if(a[i]=='B'){
                    countB++;
                }
                prev=a[i];
            }
            else{
                if(a[i]=='B' && prev=='B'){
                    //do nothing
                }
                else if(a[i]=='B' && prev=='W'){
                    countB++;
                    prev=a[i];
                }
                else{
                    prev=a[i];
                }
            }
        }
        
        System.out.println(countB);
        int i=0;
        int c=0;
        
        while(c<t){
            if(c==0 && a[c]=='B'){
                ++i;
            }
            else if(c>0){
                if(a[c]=='B'){
                    i++;
                    if(c==t-1){
                        System.out.print(i+" ");
                    }
                }
                else if(a[c]=='W' && a[c-1]=='B'){
                    System.out.print(i+" ");
                    i=0;
                }
            }
            
            ++c;
            
        }
        
    }
}