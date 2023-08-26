#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
      // declearation of variables
      char ch;
      int choice, a1, b1, c1, peri_t, s, area_t, len, breath, area_r, peri_r, num1, num2, num3, mark, num, i, count, rem, rev, onum, sum, original_num, n1, n2, next, limit, fact, n, row, col, res, j, num_1[5], table[3][3], a[3][3], b[3][3], m[3][3], r, c, k, a2[5], temp;
      int no_1, no_2;
      // display
      printf("\n*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^* ALL C PROGRAM FIRST YEAR *^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*\n");

      printf("\n----------First Semester----------");
      printf("\n*******************************************************************");
      printf("\n1.Find area perimeter of triangle and rectangle.\n2.Find maximum among three number.\n3.Find maximum among three number using else if ladder.\n4.Find maximum among three number using Nested if else.\n5.Program for arithmatic opertion using switch case.\n6.Program for arithmatic operation using switch case & goto label.\n7.Program for condition (terminal ? :)oprator.\n8.Program to check Prime number.\n9.Program to find reverse of a number.\n10.Program to find Armstrong number.\n11.Program to print the fibonacci series.\n12.Program to print factorial of a number.\n13.Program to print 2 t0 n tables using nested for loop.\n14.Program to searching element in an array.\n15.Program to print transpose of matrix.\n16.Program to print multiplication of matrix.\n17.Program to print sorting of an array.");
      printf("\n********************************************************************");

      printf("\n----------Second Semester----------");
      printf("\n**********************");
      printf("\n18.Program to swap number by using call by reference.");
      printf("\n**********************");

      // input from user
      printf("\nEnter your choice");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
            printf("\nEnter the value of 3 sides of triangle \n"); // input from user
            scanf("%d%d%d", &a1, &b1, &c1);

            peri_t = a1 + b1 + c1; // logic
            s = peri_t / 2;
            area_t = sqrt(s * (s - a1) * (s - b1) * (s - c1));

            printf("\nThe perimeter of triangle is%d:", peri_t); // display result
            printf("\nThe area of triangle is:%d", area_t);

            printf("\nEnter the value of lenth and breath of rectangle"); // input from user
            scanf("%d%d", &len, &breath);

            area_r = len * breath; // logic
            peri_r = 2 * (len + breath);

            printf("\nArea of rectangle is:%d", area_r); // display result
            printf("\nPerimeter of rectangle is:%d", peri_r);

            break;
      case 2:
            printf("Enter three numbers"); // input from user
            scanf("%d%d%d", &num1, &num2, &num3);

            if (num1 > num2 & num1 > num3) // condition
                  printf("\n%d is maximum number", num1);

            if (num2 > num1 & num2 > num3)
                  printf("\n%d is maximum number", num2);

            if (num3 > num1 & num3 > num2)
                  printf("%d is maximum number", num3);

            break;
      case 3:
            printf("Enter the three number"); // input from user
            scanf("%d%d%d", &num1, &num2, &num3);

            if (num1 > num2 & num1 > num3) // condition
                  printf("\n %d is maximum number", num1);
            else if (num2 > num1 & num2 > num3)
                  printf("\n %d is maximum number", num2);
            else
                  printf("\n %d is maximum number", num3);

            break;
      case 4:
            printf("Enter the three number"); // input from user
            scanf("%d%d%d", &num1, &num2, &num3);

            if (num1 > num2) // condition
                  if (num1 > num3)
                        printf("\n %d is maximum number", num1);
                  else
                        printf("\n %d is maximum number", num3);
            else if (num2 > num3)
                  printf("\n %d is maximum number", num2);
            else
                  printf("\n %d is maximum number", num3);

            break;
      case 5:
            printf("\n***********");
            printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Mod");
            printf("\n**********");

            printf("\nEnter the value of two number"); // input from user
            scanf("%d%d", &num1, &num2);
            printf("\nEnter your choice");
            scanf("%d", &choice);

            switch (choice) // logic
            {
            case 1:
                  num3 = num1 + num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 2:
                  num3 = num1 - num2;
                  printf("\n The result is=%d", num3);
                  break;

            case 3:
                  num3 = num1 * num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 4:
                  num3 = num1 / num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 5:
                  num3 = num1 % num2;
                  printf("\n The result is=%d", num3);
                  break;

            default:
                  printf("\n Invalid input");
            }

            break;
      case 6:
      back: // label
            printf("\n***********");
            printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Mod");
            printf("\n**********");

            printf("\nEnter the value of two number"); // input from user
            scanf("%d%d", &num1, &num2);
            printf("\nEnter your choice");
            scanf("%d", &choice);

            switch (choice) // logic
            {
            case 1:
                  num3 = num1 + num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 2:
                  num3 = num1 - num2;
                  printf("\n The result is=%d", num3);
                  break;

            case 3:
                  num3 = num1 * num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 4:
                  num3 = num1 / num2;
                  printf("\nThe result is=%d", num3);
                  break;

            case 5:
                  num3 = num1 % num2;
                  printf("\n The result is=%d", num3);
                  break;

            default:
                  printf("\n Invalid input");
            }

            printf("\nDo you want to continue:Y/N"); // input from user
            scanf("%s", &ch);
            if (ch == 'Y') // goto label
                  goto back;
            else
                  exit(0);

            break;
      case 7:
            printf("\nEnter the Mark"); // input from user
            scanf("%d", &mark);

            printf("%s", (mark > 40) ? "Pass" : "Failed"); // logic

            break;
      case 8:
            printf("\nEnter the number"); // input from user
            scanf("%d", &num);
            i = 2;
            count = 0;
            while (i <= num / 2) // logic
            {
                  if (num % i == 0)
                  {
                        count = 1;
                        break;
                  }
                  ++i;
            }
            if (count == 0)
                  printf("\n %d is Prime number", num);
            else
                  printf("\n %d is Not Prime number", num);

            break;
      case 9:
            printf("\n Enter the number"); // input from user
            scanf("%d", &num);
            onum = num;
            rev = 0;

            while (num != 0) // logic
            {
                  rem = num % 10;
                  rev = rev * 10 + rem;
                  num = num / 10;
            }
            printf("\n The reverse of %d is %d", onum, rev); // Display result

            break;
      case 10:
            printf("\n Enter the number"); // input from user
            scanf("%d", &num);

            original_num = num;
            sum = 0;
            while (original_num != 0) // logic
            {
                  rem = original_num % 10;
                  sum = sum + (rem * rem * rem);
                  original_num = original_num / 10;
            }
            if (sum == num) // codition
                  printf("\n %d is an armstrong number", num);
            else
                  printf("\n %d is not an armstrong number", num);

            break;
      case 11:

            printf("\nEnter the limit"); // input from user
            scanf("%d", &limit);
            i = 3;
            n1 = 0;
            n2 = 1;
            printf("\n Fibonacci series:%d\t %d\t", n1, n2);

            while (i <= limit) // logic
            {
                  next = n1 + n2;
                  printf("%d\t", next);
                  n1 = n2;
                  n2 = next;
                  i = i + 1;
            }

            break;
      case 12:
            printf("\n Enter the value of number"); // input from user
            scanf("%d", &n);

            for (i = 1; i <= n; i++) // for loop
            {
                  fact = fact * i;
            }
            printf("\n The factorial of %d is %d", n, fact); // Display result

            break;
      case 13:
            printf("\nEnter the limit"); // Input from user
            scanf("%d", &limit);

            for (row = 1; row <= 10; row++) // Nested for loop
            {
                  for (col = 1; col <= limit; col++)
                  {
                        res = row * col;
                        printf("%4d", res); // Display result
                  }
                  printf("\n");
            }

            break;
      case 14:
            printf("\n Enter the element in an array"); // Input array element
            for (j = 0; j <= 4; j++)                    // for loop
            {
                  scanf("%d", &num_1[j]);
            }

            printf("\nEnter the element to be search in an array");
            scanf("%d", &n);

            for (j = 0; j < 5; j++) // Searching array element
            {
                  if (num_1[j] == n)
                  {
                        printf("\n%d is present in an array at position %d", n, j); // Display result
                        exit(0);
                  }
            }
            printf("\n %d is not present in an array", n);

            break;
      case 15:
            printf("\n Enter the array element"); // Input array element from user
            for (i = 0; i < 3; i++)
            {
                  for (j = 0; j < 3; j++)
                  {
                        scanf("%d", &table[i][j]);
                  }
            }
            printf("\n Array element are:\n"); // Dispaly array element
            for (i = 0; i < 3; i++)
            {
                  for (j = 0; j < 3; j++)
                  {
                        printf("%d\t", table[i][j]);
                  }
                  printf("\n");
            }
            printf("\n Transpose of matrix \n"); // Display transpose of matrix
            for (i = 0; i < 3; i++)
            {
                  for (j = 0; j < 3; j++)
                  {
                        printf("%d\t", table[j][i]);
                  }
                  printf("\n");
            }
            break;
      case 16:
            printf("\n Enter the element of first array\n"); // input from user
            for (r = 0; r < 3; r++)
            {
                  for (c = 0; c < 3; c++)
                  {
                        scanf("%d", &a[r][c]);
                  }
            }

            printf("\n Enter the element of second array\n"); // input from user
            for (r = 0; r < 3; r++)
            {
                  for (c = 0; c < 3; c++)
                  {
                        scanf("%d", &b[r][c]);
                  }
            }

            printf("\n Element of first array"); // display array element
            for (r = 0; r < 3; r++)
            {
                  for (c = 0; c < 3; c++)

                  {
                        printf("%d\t", a[r][c]);
                  }
                  printf("\n");
            }

            printf("\n Element of second array"); // display array element
            for (r = 0; r < 3; r++)
            {
                  for (c = 0; c < 3; c++)
                        ;
                  {
                        m[r][c] = 0;
                        for (k = 0; k < 3; k++)
                        {
                              m[r][c] = a[r][k] * b[k][c];
                        }
                  }
                  printf("\n");
            }

            printf("\n Multiplication of matrix"); // display multiplication of matrix
            for (r = 0; r < 3; r++)
            {
                  for (c = 0; c < 3; c++)
                  {
                        printf("%d\t", m[r][c]);
                  }
                  printf("\n");
            }

            break;
      case 17:
            printf("\nEnter the elment of an array"); // input from user
            for (i = 0; i < 5; i++)
            {
                  scanf("%d", &a2[i]);
            }

            for (i = 0; i < 5; i++) // sorting array element
            {
                  for (j = 0; j < 5 - i - 1; j++)
                  {
                        if (a2[j] > a2[j + 1])
                        {
                              temp = a2[j];
                              a2[j] = a2[j + 1];
                              a2[j + 1] = temp;
                        }
                  }
            }
            printf("\n Sorting array element is:"); // display result
            for (i = 0; i < 5; i++)
            {
                  printf("%d\n", a2[i]);
            }

            break;
      default:
            printf("\nInvalid input : Please Enter Valid Input");
      }
}
