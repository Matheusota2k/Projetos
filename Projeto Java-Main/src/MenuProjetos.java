import java.util.Scanner;
import java.util.Random;
import java.io.FileWriter;
import java.io.IOException;

public class MenuProjetos {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.println("\nEscolha uma opção:");
            System.out.println("1 - Jogo Pedra, Papel e Tesoura");
            System.out.println("2 - Pirâmide de Números");
            System.out.println("3 - Sair");

            int opcao = input.nextInt();

            if (opcao == 1) {
                jogarPedraPapelTesoura();
            } else if (opcao == 2) {
                gerarPiramideDeNumeros();
            } else if (opcao == 3) {
                break;
            } else {
                System.out.println("\nOpção inválida. Tente novamente.\n");
            }
        }

        System.out.println("\nObrigado por testar!\n");
    }

    public static void jogarPedraPapelTesoura() {
        Scanner input = new Scanner(System.in);
        Random random = new Random();
        String historico = "";

        String[] escolhas = {"pedra", "papel", "tesoura"};

        while (true) {
            System.out.println("Escolha sua jogada (pedra, papel ou tesoura): ");
            String jogadaDoUsuario = input.nextLine();

            if (!jogadaDoUsuario.equals("pedra") && !jogadaDoUsuario.equals("papel") && !jogadaDoUsuario.equals("tesoura")) {
                System.out.println("\nOpção inválida. Tente novamente.\n");
                continue;
            }

            int indiceDaJogadaDoComputador = random.nextInt(escolhas.length);
            String jogadaDoComputador = escolhas[indiceDaJogadaDoComputador];

            System.out.println("\nO computador escolheu " + jogadaDoComputador + ".");

            String resultado;
            if (jogadaDoUsuario.equals(jogadaDoComputador)) {
                resultado = "\nEmpate\n";
            } else if ((jogadaDoUsuario.equals("pedra") && jogadaDoComputador.equals("tesoura"))
                    || (jogadaDoUsuario.equals("papel") && jogadaDoComputador.equals("pedra"))
                    || (jogadaDoUsuario.equals("tesoura") && jogadaDoComputador.equals("papel"))) {
                resultado = "\nVocê venceu!\n";
            } else {
                resultado = "\nComputador venceu!\n";
            }

            historico += "Jogador: " + jogadaDoUsuario + " | Computador: " + jogadaDoComputador + " | Resultado: " + resultado + "\n";

            System.out.println(resultado);
            System.out.println("Deseja jogar novamente? (s/n)");
            String resposta = input.nextLine();

            if (!resposta.equals("s")) {
                break;
            }
        }

        try {
            FileWriter arquivo = new FileWriter("historico.txt");
            arquivo.write(historico);
            arquivo.close();
            System.out.println("Histórico salvo com sucesso!");
        } catch (IOException e) {
            System.out.println("Ocorreu um erro ao salvar o histórico.");
            e.printStackTrace();
        }
    }

    public static void gerarPiramideDeNumeros() {
        Random random = new Random();
        int[] numeros = new int[120];
        int posicao = 0;
        int totalNumeros = 0;
        for (int i = 0; i < 15; i++) {
        for (int j = 0; j <= i; j++) {
        numeros[posicao++] = random.nextInt(100);
        totalNumeros++;
        }
        }
        System.out.println("\nTotal de números gerados: " + totalNumeros);
        System.out.print("Lista de números gerados: ");
        for (int i = 0; i < numeros.length; i++) {
        System.out.print(String.format("%02d ", numeros[i]));
        }
        System.out.println("\n");
        gerarPiramide(numeros);
        calcularSomaDosMenoresValores(numeros);
    }

    public static void gerarPiramide(int[] numeros) {
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(String.format("%02d ", numeros[i*(i+1)/2+j]));
            }
            System.out.print("   ");
            int menorValor = Integer.MAX_VALUE;
            for (int j = 0; j <= i; j++) {
                int valor = numeros[i*(i+1)/2+j];
                if (valor < menorValor) {
                    menorValor = valor;
                }
            }
            System.out.println("Menor valor: " + menorValor);
        }
    }

    public static void calcularSomaDosMenoresValores(int[] numeros) {
        int soma = 0;
        int posicao = 0;
        for (int i = 0; i < 15; i++) {
            int menorValor = Integer.MAX_VALUE;
            for (int j = 0; j <= i; j++) {
                int valor = numeros[posicao++];
                if (valor < menorValor) {
                    menorValor = valor;
                }
            }
            soma += menorValor;
        }
        System.out.println("\nSoma dos menores valores: " + soma);
    }
   }


