// Curso: Engenharia de Software
// Disciplina: Sistemas Embarcados
// Professor: Vandermi Joao da Silva
// Autor: Carlos Eduardo Pinto Rossy
// Data: 09/10/2021

// Codifique o circuito desenvolvido na
// questão 1 em linguagem de programação Rust.

fn main() {
    
  let a:i32 = 0;//basta alterar o valor de a para 1 ou 0.
  let b:i32 = 0;//basta alterar o valor de b para 1 ou 0.
  let x:i32 = a | b;//fazendo a comparação da  porta OR e salvando na variavel x.
  
  println!("Porta OR A,B is ({})", x);
  println!("Negação da Porta OR A,B is ({})", !x+2);
  
}