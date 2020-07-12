package practica1;

/**
 *
 * @author USER
 */
public class Persona {
    protected int cedula;
    protected String nombre;
    protected String apellido;
    protected byte edad; //va desde -127 hasta 127
    protected float peso;
    protected boolean coronavirus;

    public Persona() {
        nombre = "";
        apellido = "";
    }

    public Persona(int cedula, String nombre, String apellido, int edad, boolean coronavirus) {
        this.cedula = cedula;
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = (byte)edad;
        this.coronavirus = coronavirus;
    }   

    public int getCedula() {
        return cedula;
    }

    public void setCedula(int cedula) {
        this.cedula = cedula;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public byte getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = (byte)edad;
    }
    
    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    public boolean isCoronavirus() {
        return coronavirus;
    }

    public void setCoronavirus(boolean coronavirus) {
        this.coronavirus = coronavirus;
    }
    
    public String comer(String comida,float cant) {
        peso += cant / 1000 * 0.3;
        return "Comiendo " + comida + " Nuevo Peso: " + peso;
    }
    
    public String ejercitar(short minutos) {
        if(!coronavirus) {
            peso -= minutos * 5f / 1000; // la f convierte a float
            return "Ejercitando " + minutos + " min. Nuevo Peso: " + peso;
        }
        return "Ejercicio no permitido con Coronavirus";
    }

    @Override
    public String toString() {
        return "\nPERSONA:" + "\nCedula: " + cedula + "\nNombre: " + nombre
                + "\nApellido: " + apellido + "\nEdad: " + edad 
                + "\nTiene coronavirus? " + (coronavirus ? "Si":"No" );
    }
    
    
}