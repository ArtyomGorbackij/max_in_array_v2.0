#include <iostream>
#include <sstream>
using namespace std;

int main( )
{int max,max2;
    for( string string; getline( cin, string ); ) {
        int numbers[ 10 ];
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }
         max=numbers[0];
        if( !failure ) {
            for( int i = 1; i < 10; ++i ) {
                if(max<numbers[i]){max=numbers[i];}
            }
            break;
        }
        else {
           cout << "An error has occured while reading numbers from line" << endl;
        }
    }
       for( string string; getline( cin, string ); ) {
        int numb[ 10 ];
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numb[ i ] ) ) {
                failure = true;
                break;
            }
        }
        
        if( !failure ) {
            for( int i = 1; i < 10; ++i ) {
                max2=numb[0];
                if(max2<numb[i]){max2=numb[i];}
            }
            break;
        }
        else {
           cout << "An error has occured while reading numbers from line" << endl;
           
        } 
      }cout<<max+max2;
   return 0;
 }
