fn main() {
    let zeichenfolge1= "Hallo ";
    let zeichenfolge2= "Welt";
    let zeichenfolge = zeichenfolge1.to_owned()+zeichenfolge2;
    println!("{}",zeichenfolge);
}
