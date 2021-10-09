// Curso: Engenharia de Software
// Disciplina: Sistemas Embarcados
// Professor: Vandermi Joao da Silva
// Autor: Carlos Eduardo Pinto Rossy
// Data: 09/10/2021

library IEEE;
use IEEE.std_logic_1164.all;

entity P is
    port(
  	a : in std_logic;--entrada
  	b : in std_logic;--entrada
  	x : out std_logic --saída
    );
end P;

--arquitetura
architecture rtl of P is
begin
  process(a, b) is
  begin
    x <= not(a or b);
  end process;
end rtl;