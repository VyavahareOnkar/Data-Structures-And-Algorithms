

    import java.util.*
    ;
public class ABC
{
    static boolean uniqueCharacters(String str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = i + 1; j < str.length(); j++)
                if (str.charAt(i) == str.charAt(j))
                {
                    return false;
                }
            return true;
        }
    }
public  static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        if (uniqueCharacters(input))
            System.out.println("true");
        else
            System.out.println("false");
    }
}

    333333333333333333333

    [10:11 AM, 5 / 11 / 2021] Shreyash Gokhale : import java.util.*
    ;
public
class ABC
{
    static boolean uniqueCharacters(String str)
    {

        for (int i = 0; i < str.length(); i++)
            for (int j = i + 1; j < str.length(); j++)
                if (str.charAt(i) == str.charAt(j))
                    return false;

        return true;
    }

public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String input = sc.nextLine();

        if (uniqueCharacters(input))
            System.out.println("true");
        else
            System.out.println("false");
    }
}
    [10:25 AM, 5 / 11 / 2021] Shreyash Gokhale : import java.util.*
    ;
public class ABC
{

public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        StringBuilder sb = new StringBuilder();

        char[] arr = str.toCharArray();
        char previous = ' ';
        int count = 0;
        int i = 0;
        for (char c : arr)
        {
            i += 1;
            if (c == previous)
            {
                count += 1;
            }
            else
            {
                if (count > 1)
                {
                    sb.append(count);
                    sb.append(c);
                    count = 1;
                }
                else
                {
                    count = 1;
                    if (previous != ' ' && previous != c)
                    {
                        sb.append(1);
                    }
                    sb.append(c);
                }
            }
            if (arr.length == i)
            {
                sb.append(count);
            }
            previous = c;
        }
        System.out.println(sb.toString());
    }

}

44444444444444444

public class PQR
{
public static void main(String[] args)
    {
        for (int i = 100; i <= 500; i++)
        {
            if (i % 11 == 0 && i % 7 == 0)
            {
                System.out.println("Cool Dude");
            }
            else if (i % 11 == 0)
            {
                System.out.println("Dude");
            }
            else if (i % 7 == 0)
            {
                System.out.println("Cool");
            }
            else
                System.out.println(i);
        }
    }
}

    555555555555555

import java.util.*;
public class ABC
{
    static boolean isPerfectSquare(int x)
    {
        int s = (int)Math.sqrt(x);
        return (s * s == x);
    }
    static boolean isFibonacci(int n)
    {
        // (n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both)

        return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
    }
public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (isFibonacci(n))
        {
            System.out.println(n);
        }
        else
        {
            int n1 = 0, n2 = 1, n3, i;
            System.out.print(n1 + " " + n2); // printing 0 and 1

            for (i = 2; i < n; ++i) // loop starts from 2 because 0 and 1 are already printed
            {
                n3 = n1 + n2;
                System.out.print(" " + n3);
                n1 = n2;
                n2 = n3;
            }
        }
    }
}

QUESTIONS

    Programming Test : Test duration of 60 min.It consists of 5 coding questions.(20)1. Write a function that takes an input parameter as a string and return the alternate words in it with “abc”.Words are separated by dots.Note : Avoid using inbuilt functions

                                                                                                                                                                                                                                      Input : "i.like.this.program.very.much" Output : "i.abc.this.abc.very.abc" 2. Write a function that takes a number as input if the given number is a Fibonacci number,
    prints the number otherwise, print the sum of all even Fibonacci numbers less than the given number.Input : 20 Output : 10 Input : 21 Output : 21 3. Write a function that takes a string as an input and you have to return the frequency of characters.4. Write a function that takes an array of integers as input and prints the second maximum difference between any two elements from an array.Input : arr[] = {14, 12, 70, 95, 65, 22, 30};
Output : 81

    [1st max difference = 95 - 12 = 83 2nd max difference = 95 - 14 = 81] 5. Write a function that takes an array of integers and prints the numbers that have a remainder of 4 when divided by 5. Input : [ 19, 10, 44, 3, 11, 129 ] Output : [ 19, 44, 129 ] Input : [ 13, 4 ] Output : [4] 1st Technical Interview : 3 coding question 1. Write a function that takes an integer as an input and returns the nearest prime number.Input : 7 Output : 7 Input : 13 Output : 11 2. Write a function that takes two inputs,
    year, and n and returns n leap year after the given year.Input : year = 1, n = 4 Output : 4, 8, 12, 16 3. Write a function that takes a string as an input and returns the first non - repeating character.

                                                                                                                                                                                               ADVERTISING

                                                                                                                                                                                               2nd Technical Interview : 2 coding question 1. Write a function that takes a string as input and replace the space with “%
                                                                                                            ?” Input
                                                                                                            : "welcome to geeksforgeeks" Output : "welcome%?to%?geeksforgeeks" You have to make changes in the given string only.2. Function to print a pyramid pattern.3rd Technical Interview : 2 coding question 1. Given an expression string exp,
                                                                     write a program to examine whether the pairs and the orders of “
{
    “, “
}”, “(“, “)”, “[“, “]” are correct in exp.
•	If the given string is balanced then return the same string.
•	If the given string is unbalanced then balance the string and then return it.
2.	Write a function that takes a string as input and returns the output as an integer (STOI).


1) Find Second Max Element from an array on following conditions…..(19)
•	array modification not allowed,
•	all integers are positive
2)Given an input year then print year is either leap year or not leap year.
3)Print all numbers between 0 to 10, 000 which are either divisible by 3 or by 5.
4)Extension to 3rd question
if number divisible by 3 and 5 the print Raja Software
if number is divisible by 3 then print Raja
if number is divisible by 5 then print Software
5)find the angle between hr hand and min hand of a clock
e.g int CalculateAngle(int hr_hand, int min_hand)
{
}
a) Sum of a digit of a number like 467=17………….(20)
b) check whether string is unique or not.
c) print string with corresponding frequency.
d) Merge Two arrays
e) reverse whole string not a single word of a string like “I.like” = “like.i”

He said to me write a code to find second largest in array. In a single loop.
I said
a) sorting approach
b) elimination approach
c) STL approach
d) using Two Max variable( minor mistake by me

1] Hourglass problem  ……(18)
2] First non-repeating character from a string
3] Print triangle pattern of stars
This is the third Technical Interview round. In this round interviewer ask me one coding question and some puzzles.
Coding question for me is stock buy sell to maximize profit
Puzzles:
1] 50 Red and 50 Blue balls probability puzzle
2] 5 Pirates and 100 coins
3] There are 7 gates between you and your friend and you have to give 2 chocolates to your friend at the end.
On each door, there is a guard who takes half of the chocolates you have and return one, Find the minimum number of chocolates you must select at the start.
Finally, 5 students were selected after this round.
Tips: Write clean code and in a well-structured manner.
Be calm and answer politely.

Nearest prime number for given number
Leap year
Second largest in array
String to int
Stock price(Max profit)

 Once you complete the test, close the document file (it is OKAY if you keep it open as well). The access to the document will be revoked after the one hour duration of the test completes.
