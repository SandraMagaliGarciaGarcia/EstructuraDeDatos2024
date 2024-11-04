class Recursividad {
    int factorial(int fact) {
        if (fact > 0) {
            int valor = fact * factorial(fact - 1);
            return valor;
        } else {
            return 1;
        }
    }

    public static void main(String[] args) {
        Recursividad re = new Recursividad();
        int f = re.factorial(4);
        System.out.println("el factorial es " + f);

    }
}