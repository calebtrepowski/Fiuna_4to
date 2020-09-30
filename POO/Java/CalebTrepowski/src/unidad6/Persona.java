package unidad6;   //namespace

/**
 * TDA Persona
 * @author Claudio
 */
public class Persona  {
    protected int cedula;
    protected String nombre;
    protected String apellido;
    protected byte edad;     //1 bytes, 127 anhos
    protected float peso;
    protected boolean coronavirus;
    protected String direccion;
    protected String telefono;

    public Persona() {
        nombre = "";
        apellido = "";
    }

    public Persona(int cedula, String nombre, String apellido, 
            int edad, boolean coronavirus) {
        this.cedula = cedula;
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = (byte)edad;
        this.coronavirus = coronavirus;
    }
    
    public Persona(int cedula, String nombre, String apellido, 
            int edad, boolean coronavirus, String direccion) {
        this.cedula = cedula;
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = (byte)edad;
        this.coronavirus = coronavirus;
        this.direccion = direccion;
    }

    public int getCedula() {
        return cedula;
    }

    public void setCedula(int ced) {
        cedula = ced;
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
        if(edad > 127) edad = 127;
        this.edad = (byte)edad;
    }

    public boolean isCoronavirus() {
        return coronavirus;
    }

    public void setCoronavirus(boolean coronavirus) {
        this.coronavirus = coronavirus;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }
    
    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public String getTelefono() {
        return telefono;
    }

    public void setTelefono(String telefono) {
        this.telefono = telefono;
    }

    public String comer(String comida, float cant) {
        peso += cant / 1000 * 0.3;
        return "Comiendo " + comida + " Nuevo Peso: " + peso;
    }
    
    public String ejercitar(int minutos) {
        if(!coronavirus) {
            peso -= minutos * 5f / 1000;
            return "Ejercitando " + minutos + "min. Nuevo Peso: " + peso;
        }
        return "Ejercicio no permitido con coronavirus";
    }
    
    @Override
    public String toString() {
        return "Persona: " + " " + cedula + ", " + nombre 
                + " " + apellido + ", " + edad + " anhos, "+
                peso + "Kg" +
                "\nTiene coronavirus? " + 
                (coronavirus ? "SI" : "NO") +
                "\n Direccion: " + direccion +
                "\n Telefono: " + telefono;
    }
    
}  //end class
