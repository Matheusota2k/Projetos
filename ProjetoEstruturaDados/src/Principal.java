import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
        ListaAlunos lista = new ListaAlunos(); // Instancia a classe ListaAlunos
        
        do {
            System.out.println("\nMenu de Opções:");
            System.out.println("1. Incluir");
            System.out.println("2. Buscar");
            System.out.println("3. Mostrar");
            System.out.println("4. Remover");
            System.out.println("0. Sair");
            System.out.print("Digite sua opção: ");
            opcao = sc.nextInt();
            
            switch(opcao) {
                case 1:
                    incluir(lista, sc);
                    break;
                case 2:
                    buscar(lista, sc);
                    break;
                case 3:
                    mostrar(lista);
                    break;
                case 4:
                    remover(lista, sc);
                    break;
                case 0:
                    System.out.println("Saindo do programa...");
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
        } while (opcao != 0);
    }
    
    public static void incluir(ListaAlunos lista, Scanner sc) {
        System.out.println("\nInclusão de Aluno");
        System.out.print("Digite o RGM do aluno: ");
        String rgm = sc.next();
        sc.nextLine(); // Consome o \n deixado pelo next()
        System.out.print("Digite o nome do aluno: ");
        String nome = sc.nextLine();
        
        // Adiciona o novo aluno à lista de alunos
        lista.adicionarAlunoOrdenado(rgm, nome);
        
        System.out.println("\nAluno adicionado com sucesso!\n");
    }

    
    public static void buscar(ListaAlunos lista, Scanner sc) {
        System.out.println("\nBusca de Aluno:");
        System.out.print("Digite o RGM do aluno: ");
        String rgm = sc.next();
        
        // Busca o aluno na lista de alunos
        String nome = lista.buscarAluno(rgm);
        
        if (nome != null) {
            System.out.println("\nAluno encontrado: \n" + nome);
        } else {
            System.out.println("\nAluno não existe!\n");
        }
    }
    
    public static void mostrar(ListaAlunos lista) {
        String[] rgms = lista.getRGMs();
        
        System.out.println("Lista de Alunos:");
        for (int i = 0; i < rgms.length; i++) {
            String nome = lista.buscarAluno(rgms[i]);
            System.out.println((i+1) + ". RGM: " + nome);
        }
    }

    
    public static void remover(ListaAlunos lista, Scanner sc) {
        System.out.println("\nRemoção de Aluno:");
        System.out.print("Digite o RGM do aluno: ");
        String rgm = sc.next();
        
        // Remove o aluno da lista de alunos
        boolean removido = lista.removerAluno(rgm);
        
        if (removido) {
            System.out.println("\nAluno removido com sucesso!");
        } else {
            System.out.println("\nAluno não encontrado!");
        }
    }
}

