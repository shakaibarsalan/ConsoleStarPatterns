#include<iostream>
using namespace std;

int main()
{
    while ( true )
    {
        int a , b , c , d , e , f , g , h , i , j ;
	    int x ;
        string z ;

        //cout << "Enter Size : " ;
        //cin >> x ;
        
        cout << "Input a Character : " ;
	    cin >> z ;

        for ( a = 1 ; a <= 12 ; a++ )
        {

            for ( b = 1 ; b <= 23 ; b++ )
            {
                cout << " " ;
            }

                c = a ;
                for ( c ; c <= 12 ; c++ )
                {
                    cout << " " ;
                }

	    	        d = a ;
	    	        for ( d ; d >= 1 ; d-- )
	    	        {
	    	        	cout << z ;
	    	        }
    
	    	            e = a ;
	    	            for ( e ; e > 1 ; e-- )
	    	            {
	    	            	cout << z ;
	    	            }
            cout << endl ;
        }
    
	    for ( a = 1 ; a <= 12 ; a++)
	    {
        
            b = a ;
            for( b ; b > 1 ; b-- )
            {
                cout << " " ;

            }

                c = a ;
                for( c ; c <= 12 ; c++ )
                {
                    cout << z ;

                }

                    d = a ;
                    for( d ; d <= 11 ; d++ )
                    {
                        cout << z ;

                    }

                        e = a ;
                        for( e ; e > 1 ; e-- )
                        {
                            cout << " " ;
                        }

                            for ( f = 1 ; f <= 24 ; f++ )
                            {
                                cout << " " ;
                            }

                                g = a ;
                                for( g ; g > 1 ; g-- )
                                {
                                    cout << " " ;

                                }

                                    h = a ;
                                    for( h ; h <= 12 ; h++ )
                                    {
                                        cout << z ;

                                    }

                                        i = a ;
                                        for( i ; i <= 11 ; i++ )
                                        {
                                            cout << z ;

                                        }
	    	cout << endl ;
	    }

        for ( a = 1 ; a <= 12 ; a++ )
        {
            b = a ;
            for ( b ; b < 12 ; b++ )
            {
                cout << " " ;
            }
    
	    	    c = a ;
	    	    for ( c ; c >= 1 ; c-- )
	    	    {
	    	    	cout << z ;
	    	    }
    
	    	        d = a ;
	    	        for ( d ; d > 1 ; d-- )
	    	        {
	    	        	cout << z ;
	    	        }

                        e = a ;
                        for( e ; e <= 12 ; e++ )
                        {
                            cout << " " ;

                        }

                            for ( f = 1 ; f < 23 ; f++ )
                            {
                                cout << " " ;
                            }

                                g = a ;
                                for ( g ; g <= 12 ; g++ )
                                {
                                    cout << " " ;
                                }

	    	                        h = a ;
	    	                        for ( h ; h >= 1 ; h-- )
	    	                        {
	    	                        	cout << z ;
	    	                        }
    
	    	                            i = a ;
	    	                            for ( i ; i > 1 ; i-- )
	    	                            {
	    	                            	cout << z ;
	    	                            }
            cout << endl ;
        }
        
        for ( a = 1 ; a <= 12 ; a++ )
        {

            for ( b = 1 ; b <= 23 ; b++ )
            {
                cout << " " ;
            }

                c = a ;
                for( c ; c > 1 ; c-- )
                {
                    cout << " " ;

                }

                    d = a ;
                    for( d ; d <= 12 ; d++ )
                    {
                        cout << z ;

                    }

                        e = a ;
                        for( e ; e <= 11 ; e++ )
                        {
                            cout << z ;

                        }
            cout << endl ;
        }
    }
    cout << endl ;
    return 0;
}
