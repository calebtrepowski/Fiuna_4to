/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package unidad6;
import java.util.Scanner;

/**
 *
 * @author USER
 */
public class TestEmpleado {
    
    public final void imprimirDatos (Empleado e)
    {
        System.out.println(e.toString());
    }

    public TestEmpleado() {
        Empleado empleados[];
        empleados = new Empleado[6];
        empleados[0] = new Jefe(4123456, "Juan", "Perez", 58, false, "Mcal Lopez 2138", 5500000, "Marketing");
        empleados[1] = new Vendedor(5321654, "Alberto", "Diaz", 33, false, "Mallorquin 325", 2500000, 0.15);
        empleados[2] = new EmpHora(3227894, "Marco", "Villalba", 25, false, "Las guayabas 4241", 13000, 180);
        Scanner keyboard = new Scanner(System.in);
        int cedula, edad;
        String nombre, apellido, direccion;
        Boolean coronavirus;
        
        System.out.println("Ingrese datos de Jefe");
        System.out.println("\nCedula: ");
        cedula = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nNombre: ");
        nombre = keyboard.nextLine();
        System.out.println("\nApellido: ");
        apellido = keyboard.nextLine();
        System.out.println("\nEdad: ");
        edad = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nTiene coronavirus? (true o false): ");
        coronavirus = keyboard.nextBoolean();
        keyboard.nextLine();
        System.out.println("\nDireccion: ");
        direccion = keyboard.nextLine();
        System.out.println("\nSalario: ");
        int salario = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nDepartamento: ");
        String departamento = keyboard.nextLine();
        
        empleados[3] = new Jefe(cedula, nombre, apellido, edad, coronavirus, direccion, salario, departamento);
        
        System.out.println("Ingrese datos de Vendedor");
        System.out.println("\nCedula: ");
        cedula = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nNombre: ");
        nombre = keyboard.nextLine();
        System.out.println("\nApellido: ");
        apellido = keyboard.nextLine();
        System.out.println("\nEdad: ");
        edad = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nTiene coronavirus? (true o false): ");
        coronavirus = keyboard.nextBoolean();
        keyboard.nextLine();
        System.out.println("\nDireccion: ");
        direccion = keyboard.nextLine();
        System.out.println("\nSalario: ");
        salario = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nComision: ");
        double comision = Double.parseDouble(keyboard.nextLine());
        
        empleados[4] = new Vendedor(cedula, nombre, apellido, edad, coronavirus, direccion, salario, comision);
        
        System.out.println("Ingrese datos de Empleado Hora");
        System.out.println("\nCedula: ");
        cedula = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nNombre: ");
        nombre = keyboard.nextLine();
        System.out.println("\nApellido: ");
        apellido = keyboard.nextLine();
        System.out.println("\nEdad: ");
        edad = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nTiene coronavirus? (true o false): ");
        coronavirus = keyboard.nextBoolean();
        keyboard.nextLine();
        System.out.println("\nDireccion: ");
        direccion = keyboard.nextLine();
        System.out.println("\nSalario por hora: ");
        salario = Integer.parseInt(keyboard.nextLine());
        System.out.println("\nCantidad de Horas: ");
        double cantHoras = Double.parseDouble(keyboard.nextLine());
        
        empleados[5] = new EmpHora(cedula, nombre, apellido, edad, coronavirus, direccion, salario, cantHoras);
        
        for (Empleado empleado : empleados) {
            imprimirDatos(empleado);
            System.out.println("Salario a Cobrar: ");
            System.out.println(empleado.calcularSalario());
            System.out.println("\n");
            //calcular salario se comporta polimorficamente
        }
        
    }

    public static void main(String[] args) {
        TestEmpleado te = new TestEmpleado();
        
    }
}
