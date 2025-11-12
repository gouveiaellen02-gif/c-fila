#include <cstdlib>

#include <iostream>

using namespace std;

class FilaDeArray

{

private:

    int *VET;

    int ProximaPosicaoLivre;

    int MAX;

public:

    FilaDeArray(int qtde)

    {

        MAX = qtde;

        VET = new int[MAX];

        ProximaPosicaoLivre = 0;

    }

    void Enfileira(int n)

    {

        if (ProximaPosicaoLivre < MAX)

        {

            VET[ProximaPosicaoLivre++] = n;

        }

        else

        {

            cout << "Fila lotada!\n";

        }

    }

    void Mostra()

    {

        cout << "Fila: ";

        for (int i = 0; i < ProximaPosicaoLivre; i++)

        {

            cout << VET[i] << " ";

        }

        cout << "\n";

    }

    int Andar()

    {

        if (ProximaPosicaoLivre > 0)

        {

            int aux = VET[0]; // primeiro valor que entrou

            // faz a fila "andar"

            for (int i = 0; i < ProximaPosicaoLivre - 1; i++)

            {

                VET[i] = VET[i + 1];

            }

            ProximaPosicaoLivre--; // a fila diminui

            return aux;

        }

        else

        {

            cout << "Fila vazia!\n";

            return -1;

        }

    }

    ~FilaDeArray()

    {

        delete[] VET;

    }

};

int main(int argc, char *argv[])

{

    FilaDeArray fila(10); // nome correto

    fila.Enfileira(3);

    fila.Enfileira(5);

    fila.Enfileira(7);

    fila.Enfileira(1);

    fila.Mostra();

    cout << "Saiu: " << fila.Andar() << "\n";

    fila.Mostra();

    cout << "Saiu: " << fila.Andar() << "\n";

    fila.Mostra();



    return 0;

}
 