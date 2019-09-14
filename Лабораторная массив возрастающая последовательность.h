#include <iostream.h>

int main()

{

 int SIZE ;

 std::cout << "Enter size: ";

        std::cin >> SIZE;

 int *array = new int[ SIZE ];

 std :: cout << "Enter " << SIZE << " elements: ";

 for ( int i = 0; i < SIZE; i++ )

 {

  std::cin >> array[ i ];

 }

 int *dp = new int[ SIZE ];

 dp[0] = 1;

 int max;

 for ( int i = 1; i < SIZE; i++ )

 {

  max = 0;

  for (int j = i - 1; j >= 0; j-- )     
             
  {

   if ( ( array[ i ] > array[ j ] ) && ( max < dp[ j ] ) )



   {

    max = dp[j];

   }

  }

  dp[i] = max + 1;

 }

 max = 0;

 std::cout << "Sequences: ";

 for ( int i = 0; i < SIZE; i++ )

 {

  if ( dp[ i ] > max )

   max = dp[ i ];

   std::cout << dp[ i ] << " ";

 }

 std::cout << "\nTo delete: " << SIZE - max << "\nMax: " << max << std::endl;
}
