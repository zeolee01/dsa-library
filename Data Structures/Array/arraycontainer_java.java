import java.util.*;
public class arraycontainer_java {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int [] arr=new int[10];         //declaring an array of size 10 elements
        for (int i=0;i<10;i++) {
            arr[i]=sc.nextInt();        //Storing elements in the array
        }
        System.out.println("The elements stored in the array are:");
        for (int elem:arr) {             //For each loop to traverse the array
            System.out.println(elem);    //Printing elements stored in the array
        }
    }
}
