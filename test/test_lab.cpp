
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task8.h"

#include "gtest/gtest.h"



TEST(task2, collatz)
{
   unsigned int maxlen,number;
   number=seqCollatz(&maxlen);
   ASSERT_EQ(525,maxlen);
   ASSERT_EQ(837799,number);
  
}

TEST(task3, int2str)
{
   char buf[256];
   unsigned int number=12345;
   char *str=int2str(buf,number);
   ASSERT_STREQ("12345",str);
}

TEST(task4, arrsum)
{
   char arr[10]={1,2,3,4,5,6,7,8,9,10};
   long long sum1=sumC(arr,10);
   long long sum2=sumR(arr,10);
   ASSERT_EQ(55,sum1);
   ASSERT_EQ(55,sum2);
   
}

TEST(task5, fib1)
{
   ASSERT_EQ(17711,fib1(22));
   ASSERT_EQ(1,fib1(1));
}

TEST(task6, fib2)
{
   ASSERT_EQ(17711,fib2(22));
   ASSERT_EQ(1,fib2(1));
}

TEST(task8, calc)
{
   ASSERT_EQ(6,eval("(2+(2*2))"));
   ASSERT_EQ(24,eval("((2/4)+(12*2))"));
}
