

//Resolucion de funciones

float suma(float x, float y)
{
    float suma = x+y;
    return(suma);
}

float resta(float x, float y)
{
    float resta = x-y;
    return(resta);
}

float division(float x, float y)
{
    float division = x/y;
    return(division);
}

float multiplicacion(float x, float y)
{
    float multiplicacion = x*y;
    return(multiplicacion);
}

int factorial (int x)
{

    int aux = x;
    int fact;

    if (x==0)
    {
        return 1;
    }
    else
    {
        if (aux>0)
        {
            fact = x * factorial (x-1);
            return fact;
        }

        if(aux<0)
        {
            fact = x * factorial (x+1);
            return fact;
        }
    }//else
}
