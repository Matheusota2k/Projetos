public class ListaAlunos {
    private String[] alunos;
    private int tamanho;

    public ListaAlunos() {
        alunos = new String[60];
        tamanho = 0;
    }

    public void adicionarAlunoOrdenado(String rgm, String nome) {
        String aluno = rgm + " - " + nome;
        int i;
        for (i = tamanho - 1; i >= 0; i--) {
            String rgmAluno = alunos[i].split(" - ")[0];
            if (rgmAluno.compareTo(rgm) > 0) {
                alunos[i + 1] = alunos[i];
            } else {
                break;
            }
        }
        alunos[i + 1] = aluno;
        tamanho++;
    }
    public String buscarAluno(String rgm) {
        for (int i = 0; i < tamanho; i++) {
            String aluno = alunos[i];
            String alunoRgm = aluno.split(" - ")[0];
            if (alunoRgm.equals(rgm)) {
                return aluno;
            }
        }
        return null;
    }

    public boolean removerAluno(String rgm) {
        for (int i = 0; i < tamanho; i++) {
            String aluno = alunos[i];
            String rgmAluno = aluno.split(" - ")[0];
            if (rgmAluno.equals(rgm)) {
                alunos[i] = null;
                for (int j = i; j < tamanho - 1; j++) {
                    alunos[j] = alunos[j + 1];
                }
                tamanho--;
                return true;
            }
        }
        return false;
    }

    public String[] getRGMs() {
        String[] rgms = new String[tamanho];
        for (int i = 0; i < tamanho; i++) {
            String aluno = alunos[i];
            String rgm = aluno.split(" - ")[0];
            rgms[i] = rgm;
        }
        return rgms;
    }

    public String[] getAlunos() {
        String[] copiaAlunos = new String[tamanho];
        for (int i = 0; i < tamanho; i++) {
            copiaAlunos[i] = alunos[i];
        }
        return copiaAlunos;
    }
}

