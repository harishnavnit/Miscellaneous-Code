package animals;

public class MammalInt implements Animal {

    public void eat() {
        System.out.print("\nThe mammal eats !\n");
    }

    public void travel() {
        System.out.print("\nThe mammal travels !\n");
    }

    public int noOfLegs() {
        return 0;
    }

    public static void main(String args[]) {
        MammalInt m = new MammalInt();
        m.eat();
        m.travel();
    }
}
