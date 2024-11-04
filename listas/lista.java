import java.util.*;

class lista {
    public int i;
    public lista sig;

    public void crearNodo() {
        lista p = new lista(); // primer nodo
        p.i = 10;
        p.sig = new lista(); // segundo nodo
        p.sig.i = 5;
        p.sig.sig = new lista(); // tercer nodo
        p.sig.sig.i = 8;
        p.sig.sig.sig = new lista();// cuarto nodo
        p.sig.sig.sig.i = 1;
        // imprimir
        System.out.println(p.i);
        System.out.println(p.sig.i);
        System.out.println(p.sig.sig.i);
        System.out.println(p.sig.sig.sig.i);
    }

    public static void main(String[] args) {
        lista llama = new lista();
        llama.crearNodo();
    }
}