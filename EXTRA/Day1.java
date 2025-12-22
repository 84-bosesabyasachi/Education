package EXTRA;

class B {
    int a=10; //instance variable
    static int b=20; //static variable
}
    

    class A {
        public static void main(String[] args) {
       int c = 30; //local variable
       B obj = new B();
       
       System.out.println(c);
       System.out.println(B.b);
       System.out.println(obj.a);
       
    }
    }
