 #include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k ;

    for ( a = 1 ; a <= 7 ; a++ )
    {
        for ( b = 1 ; b <= 7 ; b++ )
        {
            cout << "  " ;
        }
            c = a ;
            for ( c ; c <= 7 ; c++  )
            {
                cout << " " ;
            }
                if (a<8)
                {
                    cout << "*" ;
                }
                    d = a ;
                    for ( d ; d > 1 ; d-- )
                    {
                        cout << " " ;
                    }
                         e = a ;
                        for ( e ;  e > 2 ; e-- )
                        {
                            cout << " " ;
                        }
                            if ( a > 1 )
                            {
                                cout << "*" ;
                            }
        cout << endl ;
    }

    for ( a = 1 ; a <= 43 ; a++ )
    {
        cout << "*" ;
    }

    cout << endl ;

    for ( a = 1 ; a <= 7 ; a++)
	{
        b = a ;
        for( b ; b >= 1 ; b-- )
        {
            cout << " " ;
        }
            cout << "*" ;
                c = a ;
                for ( c ; c < 7 ; c++ )
                {
                    cout << " " ;
                }
                    d = a ;
                    for ( d ; d < 6 ; d++  )
                    {
                        cout << " " ;
                    }
                        if ( a < 7 )
                        {
                            cout << "*" ;
                        }
                            e = a ;
                            for( e ; e > 1 ; e-- )
                            {
                                cout << " " ;
                            }
                                for ( f = 1 ; f <= 7 ; f++ )
                                {
                                    cout << "  " ;
                                }
                                    g = a ;
                                    for( g ; g > 1 ; g-- )
                                    {
                                        cout << " " ;
                                    }
                                        cout << " *" ;
                                            h = a ;
                                            for ( h ; h < 7 ; h++ )
                                            {
                                                cout << " " ;
                                            }
                                                i = a ;
                                                for ( i ; i < 6 ; i++  )
                                                {
                                                    cout << " " ;
                                                }
                                                    if ( a < 7 )
                                                    {
                                                        cout << "*" ;
                                                    }
        cout << endl ;
    }

    for ( a = 2 ; a <= 7 ; a++ )
    {
        c = a ;
        for ( c ; c <= 7 ; c++ )
        {
            cout << " " ;
        }
            cout << "*" ;
		        d = a ;
		        for ( d ; d > 1 ; d-- )
		        {
		        	cout << " " ;
		        }
		            e = a ;
		            for ( e ; e > 2 ; e-- )
		            {
		            	cout << " " ;
		            }
                        cout << "*" ;
                            b = a ;
                            for( b ; b <= 7 ; b++ )
                            {
                                cout << " " ;
                            }
                                for ( f = 1 ; f < 7 ; f++ )
                                {
                                    cout << "  " ;
                                }
                                    g = a ;
                                    for ( g ; g <= 7 ; g++ )
                                    {
                                        cout << " " ;
                                    }
                                        cout << " *" ;
		                                    h = a ;
		                                    for ( h ; h > 1 ; h-- )
		                                    {
		                                    	cout << " " ;
		                                    }
		                                        i = a ;
		                                        for ( i ; i > 2 ; i-- )
		                                        {
		                                        	cout << " " ;
		                                        }
                                                    cout << "*" ;
        cout << endl ;
    }
    for ( a = 1 ; a <= 43 ; a++ )
    {
        cout << "*" ;
    }

    cout << endl ;

    for ( a = 1 ; a <= 7 ; a++ )
    {
        for ( b = 1 ; b <= 7 ; b++ )
        {
            cout << "  " ;
        }
            d = a ;
            for( d ; d >= 1 ; d-- )
            {
                cout << " " ;
            }
                cout << "*" ;
                    c = a ;
                    for( c ; c < 7 ; c++ )
                    {
                        cout << " " ;
                    }
                        e = a ;
                        for( e ; e < 6 ; e++ )
                        {
                            cout << " " ;
                        }
                            if ( a < 7 )
                            {
                                cout << "*" ;
                            }
        cout << endl ;
    }

    cout << endl ;
    return 0;
}
