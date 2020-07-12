/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practica1;

import java.util.Date;

/**
 *
 * @author USER
 */
public abstract class Empleado extends Persona implements Trabajador { //se puede implementar varias interfaces
    protected int salario;
    protected String departamento;
    
    public Empleado() {
        this.departamento = "";
    }
    
    public Empleado(int cedula, String nombre, String apellido,
            int edad, int salario, String departamento) {
        super(cedula, nombre, apellido, edad,false);
        this.salario = salario;
        this.departamento = departamento;
    }
    
    public static final int SALARIO_MINIMO = 2200000; //final - >const

    
    public int getSalario() {
        return salario;
    }

    public void setSalario(int salario) {
        this.salario = salario;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    @Override
    public String toString() {
        return super.toString() + "\nSalario = " + salario
                + "\nDepartamento = " + departamento;
    }

    @Override
    public Date marcarEntrada() {
        return new Date();
    }

    @Override
    public String cobrarSalario() {
        return "Empleado cobrando su salario, Gs. " + calcularSalario();
    }
    
    public int IPS(){
        return Math.round(salario * 0.09f);
    }
    
    public int calcularSalario()
    {
        return salario - IPS();
    }
    
}
