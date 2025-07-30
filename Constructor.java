class Constructor {
    int a = 10; // instance variable
    String name = "Mario";
    int age = 25; // added age variable
    Constructor() {
        System.out.println("Your name is: " + name + " and your age is: " + age);
    }
    public static void main(String[] args) {
        Constructor obj = new Constructor();
        
    }
    