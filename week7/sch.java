import java.util.Scanner;
public class sch {
int jobs(int p[],int d[]){
int n = p.length;
 for(int i=0;i<n;i++){
    int min =i;
    for(int j=i+1;j<n;j++){
        if(p[j]>p[min]){
            min = j;
        }
    }
    int temp = p[min];
    p[min]=p[i];
    p[i]=temp;
    temp = d[min];
    d[min]=d[i];
    d[i]=temp;
 }
 int t[] = new int[n+1];
 int profit=0 ;
 for (int i=0;i<n;i++){
    if(t[d[i]]==0){
        t[d[i]]++;
        profit+=p[i];
    }
    else{
        continue;
    }
 }
 
    return profit;
}
    public static void main(String[] args) {
        sch o = new sch();
       Scanner s = new Scanner(System.in);
       System.out.println("enter the number of profits ");
       int a=s.nextInt();
       int p[]=new int[a];
       int d[]=new int[a];
       
       for (int i=0;i<a;i++){
        System.out.println("enter the p["+i+"]");
        p[i]=s.nextInt();}
        for(int i=0;i<a;i++){
        System.out.println("enter the d["+i+"]");
        d[i]=s.nextInt();
       }
       int profits = o.jobs(p,d);
       System.out.println("the total profit is :" + profits);
    }
}
