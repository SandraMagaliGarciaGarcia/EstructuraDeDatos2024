import java.util.*;

class Listasimple {
    public int i;
    Scanner entrada;
    public Listasimple sig;

    Listasimple() {
        i = 0;
        sig = null;
        entrada = new Scanner(System.in);
    }

    public void crearLista() {
        Listasimple lista = null;
        Listasimple aux = null;
        System.out.println("Dame el tamaño de la lista");
        int n = entrada.nextInt();
        for (int a = 0; a < n; a++) {
            if (lista == null) {
                lista = new Listasimple();
                System.out.println("Dame el valor de i");
                lista.i = entrada.nextInt();
                aux = lista;
            } else {
                aux.sig = new Listasimple();
                aux = aux.sig;
                System.out.println("Dame el valor de i");
                aux.i = entrada.nextInt();
            }
        }
        imprimirLista(lista);
    }

    public void imprimirLista(Listasimple l) {
        Listasimple aux = l;
        while (aux != null) {
            System.out.println(aux.i);
            aux = aux.sig;
        }
    }

    public static void main(String[] args) {
        Listasimple llamar = new Listasimple();
        llamar.crearLista();
    }
}