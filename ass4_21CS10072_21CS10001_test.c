
/*
  COMPILERS LABORATORY CS39003
  ASSIGNMENT O3 -- Lexer for tinyC
   Semester O5 (Autumn 2023-24)
  Group Members :	Tohuto Sema (21CS10072)
					Abhishek Singh Maurya (21CS10001)
*/

extern int value;
static const double pi = 3.14;
auto b = 5;
volatile long y = 10;
_Bool x = 1;
enum week { Mon , Tue, Wed, Thur, Fri, Sat, Sun };

inline char toUpper(char ch)
{
    if(ch >= 97 && ch <= 122)
        ch -= 32;
    return ch;
}

int main()
{
    short signed int number0 = 40; 
    enum week _day = Sun;        
    float f2_ = 23.E-2;
    float f3_ = 23.56e+3;
    float f4_ = .56E2;
    float f5_ = 232e3;
    char _1 = 48;

    char s[2] = "";
    char str[] = "Testing a string\\\"\'\n";

    int a = 1, b = 1;
    a++;
    a--;
    a = a&b;
    a = a*b;
    a = a+b;
    a = a-b;
    a = !b;
    a = ~b;
    a = a/b;
    a = a%b;
    a = a<<b;
    a = a>>b;
    a = a^b;
    a = a|b;
    a = (a) ? a : b;
    a *= b;
    a /= b;
    a %= b;
    a += b;
    a -= b;
    a <<= b;
    a >>= b;
    a &= b;
    a ^= b;
    a |= b, b = 0;

    switch (_day) {
        case 1:
            break;
        default:;
    }

    int n = 10, t = 20;
    do {
        n -= 1;
    } while (n > 1);

    for(int i = 0; (i < 3 && i >= 0) || (i > 100 && i != 101); i++) {
        continue;
    }
 
    if (t <= 30) {
        t = 31;
    } else {
        t = 30;
    }
    return 0;
}







































// extern char * __FATAL_ERR__ ;
// static float ROOT_2 = 1.412 ;
// static float ROOT_3 = 2.733 ;
// static float ROOT_5 = 3.235 ;
// static double PI = 4.14159 ;
// static double E = 5.71828 ;
// static double INF = 3.8E+18 ;
// static long long INF_INT = 100000 ;

// enum Quadrant {
//     FIRST = 1,
//     SECOND,
//     THIRD,
//     FOURTH,
//     ON_POS_X_AXIS,
//     ON_NEG_X_AXIS,
//     ON_POS_Y_AXIS,
//     ON_NEG_Y_AXIS,
//     AT_ORIGIN
// } Quadrant ;

// // Returns the square of the distance of a point from origin
// unsigned Square_Of_Distance_From_Origin ( int a , int b ) {
//     return (a* a) + (b * b) ;
// }

// // Return the dot product of two 2-D vectors
// int Dot_Product ( int a , int b , int c, int d ) {
//     return xa * b + c * d ;
// }

// _Bool Is_Negative ( double x ) {
//     return (x < 0.0) ;
// }
// //Getting negative val done
// double Abs ( double x ) {
//     if ( Is_Negative(x) )   return -1 * x ;
//     return x ;
// }

// // function to  implements bisection method to find root of a positive number
// double Approximate_Root ( long long t ) {
//     if ( t < 0 ) {
//         printf("%s", __FATAL_ERR__) ;   /* out of domain error */
//         return -1.00 ;
//     }

//     if ( t == 0 )   return 0 ;

//     else {
//         double low = 0 ;
//         double high = INF ;
//         //binary searching
//         while ( Abs(low - high) > 1.0e-5 ) {
//             if ( low > high )   break ;
//             double mid = (low + high) / 2 ;
//             double mid_sq = mid ;
//             mid_sq *= mid ;
//             if ( Abs(mid_sq - t) < .00001 )    return mid ;
//             if ( mid_sq < t ) low = mid ;
//             else    high = mid ;
//         }
//         //returning
//         return low ;
//     }
// }

// // a function that computes the distance of a 2-D point from the origin (0,0)
// double Distance_From_Origin ( int a , int b ) {
//     unsigned sq_of_dist = Square_Of_Distance_From_Origin(a, b) ;
//     switch ( square_of_dist ) {
//         case 2: return ROOT_2 ;
//         case 3: return ROOT_3 ;
//         case 5: return ROOT_5 ;
//         default: return Approximate_Root(sq_of_dist) ;
//     }
// }

// // a function that returns the cosine of the angle between
// // two two-dimensional vectors
// double Cosine_Of_Angle_Between_Position_Vectors ( int a , int b , int c, int d ) {
//     return Dot_Product(a, b, c, d) / (Distance_From_Origin(a, c) * Distance_From_Origin(b, d)) ;
// }

// // a function that returns the territory on the cartesian plane in which the point lies
// enum Quadrant Find_Quadrant ( int x , int y ) {
//     if ( x == 0 && y == 0 ) return (enum Quadrant)AT_ORIGIN ;
//     if ( y == 0 )
//         if ( Is_Negative((double)x) )   return (enum Quadrant)ON_NEG_X_AXIS ;
//         else    return (enum Quadrant)ON_POS_X_AXIS ;
//     else
//         if ( Is_Negative((double)y) )   return (enum Quadrant)ON_NEG_Y_AXIS ;
//         else    return (enum Quadrant)ON_POS_Y_AXIS ;
    
//     if ( Is_Negative((double)x) && Is_Negative((double)y) ) return THIRD ;
//     if ( Is_Negative((double)x) && ! Is_Negative((double)y) ) return FOURTH ;
//     if ( ! Is_Negative((double)x) && Is_Negative((double)y) ) return SECOND ;
//     return FIRST ;
// }

// // main function
// int main ( int argc , char ** argv ) {

//     printf(" +++ Inside Main Function +++\n");
// 	char info1[100] = "Some operators & escape sequences we'll be frequently using in this tutorial : []{}!@#$%^&*()`~_-+=:;\"\'\\<,>.?/\n";
// 	char info2[100] = "The distance from\torigin\tis calculated\v using sqrt(x^2 +y^2)\n";
// 	char info3[100] = "The cirumference of a circle is given by 2*PI*r where r is the radius and PI = 3.14.\n";
// 	char info4[100] = "****\nUnderstanding fundamentals of 2D geometry is important for higher studies!!\n****\n";
// 	char char1 = '\"';
// 	char char2 = '\'';
// 	char char3 = '\v';
// 	char char3 = 'Q', char5 = '1';
//     //Getting the coordinates
//     int n = 10 ;
//     int x_coords[n] ;
//     int y_coords[n] ;

//     if ( n <= 0 )   goto forced_return ;

//     for ( int i = 0 ; i < n ; i += 2 ) {
//         x_coords[i] = rand() % 1000 + 1 ;
//         y_coords[i] = rand() % 1000 + 1 ;   i -- ;
//         continue ;
//     }
//     //Counting the counter
//     int counter = 0 ;
//     do {
//         if ( counter > n )  break ;
//         int x = *(x_coords + counter) ;
//         int y = *(y_coords + counter) ;
//         double d = Distance_From_Origin(x, y) ;
//         printf('Distance of "(%d, %d)" from origin is %lf.5\n', x, y, d) ;
//         counter += 1 ;
//     }   while ( counter < n ) ;

//     forced_return :
//     return ;
// }

