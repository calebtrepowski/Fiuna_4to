package aplcaciones;
import java.util.Scanner;
import javax.swing.JOptionPane;
import practica1.Persona;

public class TestPersona {
    Persona p,p2; //en java no se construye aun, p = null
    
    public TestPersona() {
        Scanner sc = new Scanner(System.in);
        p = new Persona();
        System.out.println("Ingrese la cedula de la persona: ");
        int ced = sc.nextInt();
        p.setCedula(ced);
        sc = new Scanner(System.in);
        System.out.println("Ingrese el nombre de la persona: ");
        p.setNombre(sc.nextLine());
        String ape = JOptionPane.showInputDialog("Ingrese el apellido:");
        p.setApellido(ape);
        System.out.println("Ingrese la edad de la persona: ");
        p.setEdad(sc.nextInt());
        //p2 = new Persona(123456,"Caleb","Trepowski",20,false);
        //p2.setPeso(60);
        //System.out.println(p2);
        System.out.println(p); //sout + tab
    }
    
    public static void main(String[] args) { //psvm + tab
        new TestPersona(); //es un objeto anonimo
    }
}
