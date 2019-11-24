#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
  
//Funcoes obrigatorias  
void CadastraEstado();           
void CadastraCurso();            
void CadastraPessoa();           
void ListaPessoasPorEstado();    
void ListaPessoasPorCurso();     
void ConsultaPessoaPorNome();    
void GeraRelatorioDemografico(); 
void ApagaPessoaDoSistema();

int VerificaValidadeDeEstado( char EstadoParaValidar[] );
int VerificaValidadeDeCurso( char CursoParaValidar[] );

int main()
{

int opcao_menu = 1;

while (opcao_menu >=1 && opcao_menu <=8)
{
    printf("|---------Sistema_Enem-----------|\n");
    printf("|                                |\n");
    printf("|Digite a opcao desejada:        |\n");
    printf("|1)Cadastrar Estado              |\n");
    printf("|2)Cadastrar Curso               |\n");
    printf("|3)Cadastrar Pessoa              |\n");
    printf("|4)Listar pessoas por Estado     |\n");
    printf("|5)Listar pessoas por Curso      |\n");
    printf("|6)Consultar Pessoa por Nome     |\n");
    printf("|7)Gerar relatorio demografico   |\n");
    printf("|8)Apagar pessoa do sistema      |\n");    
    printf("|9)Finalizar Programa            |\n");
    printf("|--------------------------------|\n");

    scanf("%d",&opcao_menu);

    if(opcao_menu == 1)
    {
        CadastraEstado();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  
    }

    if(opcao_menu == 2)
    {
        CadastraCurso();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  
    }

    if(opcao_menu == 3)
    {
        CadastraPessoa();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  
    }

    if(opcao_menu == 4)
    {
        ListaPessoasPorEstado();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  
    }

    if(opcao_menu == 5)
    {
        ListaPessoasPorCurso();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  

    }

    if(opcao_menu == 6)
    {
        ConsultaPessoaPorNome();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  

    }

    if(opcao_menu == 7)
    {
        GeraRelatorioDemografico();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  

    }
    
    if(opcao_menu == 8)
    {
        ApagaPessoaDoSistema();
        printf("\nPressione enter para voltar ao menu\n");
        getchar();  
    }

}

return 0;
}

void CadastraEstado()//EstadosCadastrados.txt
{
    FILE *Arquivo_De_Estados_Cadastrados;

    Arquivo_De_Estados_Cadastrados = fopen("EstadosCadastrados.txt", "a");

    if (Arquivo_De_Estados_Cadastrados == NULL)
    {
        printf("Erro ao tentar abrir o arquivo\n");
        exit(1);
    }
    else
    {

    char text[99];

    getchar();  
    printf("\nDigite o estado para cadastrar:\n");  
    gets(text);

    for(int i = 0; i < strlen(text); i++)
    {
        text[i] = tolower(text[i]);
    }

    fprintf(Arquivo_De_Estados_Cadastrados, "%s\n", text);
    fclose(Arquivo_De_Estados_Cadastrados);

    }
}

void CadastraCurso()
{
    FILE *Arquivo_De_Cursos_Cadastrados;

    Arquivo_De_Cursos_Cadastrados = fopen("CursosCadastrados.txt", "a");

    if (Arquivo_De_Cursos_Cadastrados == NULL)
    {
        printf("Erro ao tentar abrir o arquivo\n");
        exit(1);
    }
    else
    {
    char text[999];

    getchar();  
    printf("\nDigite o curso para cadastrar:\n");  
    gets(text);

    for(int i = 0; i < strlen(text); i++)
    {
        text[i] = tolower(text[i]);
    }

    fprintf(Arquivo_De_Cursos_Cadastrados, "%s\n", text);

    fclose(Arquivo_De_Cursos_Cadastrados);
    }
}

void CadastraPessoa()
{
    char nome_completo[999];
    char sexo[999];
    char data_de_nascimento[999];
    char curso_desejado[999];
    char unidade_da_federacao[999];

    getchar();  
    printf("\nDigite o nome completo do aluno:\n");  
    gets(nome_completo);
    //getchar();  
    printf("\nDigite o sexo do aluno:\n");
    gets(sexo);
    //getchar();  
    printf("\nDigite a data de nascimento do aluno:\n");
    gets(data_de_nascimento);
    //getchar();  
    printf("\nDigite o nome do curso desejado:\n");
    gets(curso_desejado);
    //getchar();  
    printf("\nDigite o nome da unidade da federacao:\n");
    gets(unidade_da_federacao);

    int informacao_correta_estado = VerificaValidadeDeEstado(unidade_da_federacao);
    int informacao_correta_curso   = VerificaValidadeDeCurso (curso_desejado);

    FILE *Arquivo_De_Alunos_Cadastrados;

    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "a");

    if (Arquivo_De_Alunos_Cadastrados == NULL)
    {
        printf("Erro ao tentar abrir o arquivo\n");
        exit(1);
    }

    for(int i = 0; i < strlen(nome_completo); i++)
    {
        nome_completo[i] = tolower(nome_completo[i]);
    }
    for(int i = 0; i < strlen(sexo); i++)
    {
        sexo[i] = tolower(sexo[i]);
    }
    for(int i = 0; i < strlen(data_de_nascimento); i++)
    {//55
        data_de_nascimento[i] = tolower(data_de_nascimento[i]);
    }

    for(int i = 0; i < strlen(curso_desejado); i++)
    {//55
        curso_desejado[i] = tolower(curso_desejado[i]);
    }

    for(int i = 0; i < strlen(unidade_da_federacao); i++)
    {//55
        unidade_da_federacao[i] = tolower(unidade_da_federacao[i]);
    }

    if(informacao_correta_estado == 1 && informacao_correta_curso == 1)
    {

    fprintf(Arquivo_De_Alunos_Cadastrados, "%s,", nome_completo);
    fprintf(Arquivo_De_Alunos_Cadastrados, "%s,", sexo);
    fprintf(Arquivo_De_Alunos_Cadastrados, "%s,", data_de_nascimento);
    fprintf(Arquivo_De_Alunos_Cadastrados, "%s,", curso_desejado);
    fprintf(Arquivo_De_Alunos_Cadastrados, "%s", unidade_da_federacao);
    fprintf(Arquivo_De_Alunos_Cadastrados, "\n");
    }else
    {
        printf("Cadastro sem sucesso\n");
        
        if(informacao_correta_curso == 0)
            printf("Curso nao cadastrado\n");
    
        if(informacao_correta_estado == 0)
            printf("estado nao cadastrado\n");
    }

    fclose(Arquivo_De_Alunos_Cadastrados);

}

void ListaPessoasPorEstado()
{
    printf("Digite o nome do estado para listar os alunos:\n");
    getchar();  
    char nome_do_estado_para_pesquisar[999] = {};
    gets(nome_do_estado_para_pesquisar);
    
    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        printf("O arquivo AlunosCadastrados.csv foi aberto.\n") ; 
        printf("Alunos encontrados:\n\n") ; 
          
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            char curso_desejado_tmp[999] = {};            
            int info = 0;
            int string_aux_cont = 0;

            for(int i = 0; i < strlen(dataToBeRead) ; i++)
            {
                if(dataToBeRead[i] == ',')
                {
                    info++;
                }
                if(info == 4 && dataToBeRead[i] != ',' && i < strlen(dataToBeRead) - 1)
                {            
                    curso_desejado_tmp[string_aux_cont] = dataToBeRead[i];
                    string_aux_cont ++ ;
                }
            }

            if(strcmp(curso_desejado_tmp,nome_do_estado_para_pesquisar) == 0)
            {
            printf( "cadastro N.%d = %s \n" ,numero_de_linhas+1, dataToBeRead);
            }
            numero_de_linhas++; 
        } 
          
        fclose(Arquivo_De_Alunos_Cadastrados) ; 

        printf("\n\nInformacoes de AlunosCadastrados.csv lidas com sucesso\n");           
        printf("Arquivo fechado.\n") ; 
    } 
}

void ListaPessoasPorCurso()
{
    printf("\n\nfuncao listar pessoas por curso chamada\n\n");
    printf("Digite o nome do curso para listar os alunos:\n");
    getchar();  
    char nome_do_estado_para_pesquisar[999] = {};
    gets(nome_do_estado_para_pesquisar);
    
    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        printf("O arquivo AlunosCadastrados.csv foi aberto.\n") ; 
        printf("Alunos encontrados:\n\n") ; 
          
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            char curso_desejado_tmp[999] = {};            
            int info = 0;
            int string_aux_cont = 0;

            for(int i = 0; i < strlen(dataToBeRead) ; i++)
            {
                if(dataToBeRead[i] == ',')
                {
                    info++;
                }
                if(info == 3 && dataToBeRead[i] != ',' && i < strlen(dataToBeRead) - 1)
                {            
                    curso_desejado_tmp[string_aux_cont] = dataToBeRead[i];
                    string_aux_cont ++ ;
                }
            }
            //printf( "\n--%s--\n--%s--\n\n" ,curso_desejado_tmp, nome_do_estado_para_pesquisar);

            if(strcmp(curso_desejado_tmp,nome_do_estado_para_pesquisar) == 0)
            {
            printf( "cadastro N.%d = %s \n" ,numero_de_linhas, dataToBeRead);
            }

            numero_de_linhas++; 
        } 
          
        fclose(Arquivo_De_Alunos_Cadastrados) ; 

        printf("\n\nInformacoes de AlunosCadastrados.csv lidas com sucesso\n");           
        printf("Arquivo fechado.\n") ; 
    } 
}

void ConsultaPessoaPorNome()
{
    printf("\nFuncao consulta pessoa por nome chamada\n");
    printf("Digite o nome do aluno para pesquisar:\n\n");
    getchar();

    char nome_da_pessoa_para_pesquisar[999] = {};
    gets(nome_da_pessoa_para_pesquisar);
    
    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        printf("O arquivo AlunosCadastrados.csv foi aberto.\n") ; 
        printf("Alunos encontrados:\n\n") ; 
          
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            char curso_desejado_tmp[999] = {};            
            int info = 0;
            int string_aux_cont = 0;

            for(int i = 0; i < strlen(dataToBeRead) ; i++)
            {
                if(dataToBeRead[i] == ',')
                {
                    info++;
                }
                if(info == 0 && dataToBeRead[i] != ',' && i < strlen(dataToBeRead) - 1)
                {            
                    curso_desejado_tmp[string_aux_cont] = dataToBeRead[i];
                    string_aux_cont ++ ;
                }
            }

            //printf( "\n%s\n%s\n\n" ,curso_desejado_tmp, nome_da_pessoa_para_pesquisar);

            if(strcmp(curso_desejado_tmp,nome_da_pessoa_para_pesquisar) == 0)
            {
            printf( "cadastro N.%d = %s \n" ,numero_de_linhas, dataToBeRead);
            }
            numero_de_linhas++; 
        } 
          
        fclose(Arquivo_De_Alunos_Cadastrados) ; 

        printf("\n\nInformacoes de AlunosCadastrados.csv lidas com sucesso\n");           
        printf("Arquivo fechado.\n") ; 
    } 
}

void GeraRelatorioDemografico()
{
    double masculino = 0;
    double feminino = 0;
    double porcentagem_masculina;
    double porcentagem_feminina;

    char nome_da_pessoa_para_pesquisar[999] = "masculino";
    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        printf("O arquivo AlunosCadastrados.csv foi aberto.\n") ; 
        printf("Alunos encontrados:\n\n") ; 
          
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            char curso_desejado_tmp[999] = {};            
            int info = 0;
            int string_aux_cont = 0;

            for(int i = 0; i < strlen(dataToBeRead) ; i++)
            {
                if(dataToBeRead[i] == ',')
                {
                    info++;
                }
                if(info == 1 && dataToBeRead[i] != ',' && i < strlen(dataToBeRead) - 1)
                {            
                    curso_desejado_tmp[string_aux_cont] = dataToBeRead[i];
                    string_aux_cont ++ ;
                }
            }

            //printf( "\n%s\n%s\n\n" ,curso_desejado_tmp, nome_da_pessoa_para_pesquisar);
            //printf( "\n%d\n%d\n\n" , strlen(curso_desejado_tmp), strlen(nome_da_pessoa_para_pesquisar));

            if(strcmp(curso_desejado_tmp,nome_da_pessoa_para_pesquisar) == 0)
            {
                masculino++;
            }
            else
            {
                feminino++;
            }

            numero_de_linhas++; 
        }

        porcentagem_masculina = (100 / (masculino + feminino)) * masculino;
        porcentagem_feminina =  (100 / (masculino + feminino)) * feminino;
        char charactere_percentual = '%';
        printf("Percentual de homens  : %.1lf %c \n", porcentagem_masculina,charactere_percentual); 
        printf("Percentual de mulheres: %.1lf %c \n", porcentagem_feminina,charactere_percentual);
          
        fclose(Arquivo_De_Alunos_Cadastrados) ; 

        printf("\n\nInformacoes de AlunosCadastrados.csv lidas com sucesso\n");           
        printf("Arquivo fechado.\n") ; 
    } 
}

void ApagaPessoaDoSistema()
{

    unsigned int linha_selecionada = 0;

    printf("\nFuncao excluir cadastro chamada\n");
    printf("Digite o nome do aluno para excluir:\n\n");
    getchar();

    char nome_da_pessoa_para_pesquisar[999] = {};
    gets(nome_da_pessoa_para_pesquisar);
    
    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("AlunosCadastrados.csv", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        printf("O arquivo AlunosCadastrados.csv foi aberto.\n") ; 
          
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            char curso_desejado_tmp[999] = {};            
            int info = 0;
            int string_aux_cont = 0;

            for(int i = 0; i < strlen(dataToBeRead) ; i++)
            {
                if(dataToBeRead[i] == ',')
                {
                    info++;
                }
                if(info == 0 && dataToBeRead[i] != ',' && i < strlen(dataToBeRead) - 1)
                {            
                    curso_desejado_tmp[string_aux_cont] = dataToBeRead[i];
                    string_aux_cont ++ ;
                }
            }

            printf( "\n%s\n%s\n\n" ,curso_desejado_tmp, nome_da_pessoa_para_pesquisar);

            if(strcmp(curso_desejado_tmp,nome_da_pessoa_para_pesquisar) == 0)
            {
            printf("cadastro N.%d = %s \n" ,numero_de_linhas, dataToBeRead);
            linha_selecionada = numero_de_linhas;
            printf("%d\n", linha_selecionada);
            }
            numero_de_linhas++; 
        } 
          
        fclose(Arquivo_De_Alunos_Cadastrados) ; 

        printf("\n\nInformacoes de AlunosCadastrados.csv lidas com sucesso\n");           
        printf("Arquivo fechado.\n") ; 
    } 

    FILE *input = fopen("AlunosCadastrados.csv", "r"); //Arquivo de entrada.
    FILE *output = fopen("transferindo.txt", "w"); //Arquivo de saída.
    char texto[1001] = ""; //Uma string larga o suficiente para extrair o texto total de cada linha.
    unsigned int linha_atual = 0;

    while(fgets(texto, 1001, input) != NULL)
    {
        if(linha_atual != linha_selecionada){
            fputs(texto, output);
        }
        memset(texto, 0, sizeof(char) * 1001);
        linha_atual += 1;
    }

    fclose(input);
    fclose(output);
    remove("AlunosCadastrados.csv");
    rename("transferindo.txt", "AlunosCadastrados.csv");
}

int VerificaValidadeDeEstado( char EstadoParaValidar[1000] )
{

    EstadoParaValidar[strlen(EstadoParaValidar)] = '\n';

    int EstadoValido = 0; // 0 para estado invalido, 1 para estado valido

    double masculino = 0;
    double feminino = 0;
    double porcentagem_masculina;
    double porcentagem_feminina;

    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("EstadosCadastrados.txt", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {
            if(strcmp(dataToBeRead,EstadoParaValidar) == 0)
            {
                EstadoValido = 1;
            }
            numero_de_linhas++; 
        }

        fclose(Arquivo_De_Alunos_Cadastrados) ; 
    }
return EstadoValido;
}

int VerificaValidadeDeCurso( char CursoParaValidar[1000] )
{

    CursoParaValidar[strlen(CursoParaValidar)] = '\n';

    int CursoValido = 0; // 0 para estado invalido, 1 para estado valido

    FILE *Arquivo_De_Alunos_Cadastrados;      

    char dataToBeRead[99999] = {}; 
  
    Arquivo_De_Alunos_Cadastrados = fopen("CursosCadastrados.txt", "r") ; 
      
    if ( Arquivo_De_Alunos_Cadastrados == NULL ) 
    { 
        printf( "Falha ao tentar abrir AlunosCadastrados.csv " ) ; 
    } 
    else
    {    
        int numero_de_linhas = 0;

        while( fgets ( dataToBeRead, 99999, Arquivo_De_Alunos_Cadastrados ) != NULL ) 
        {

            //printf( "\n%s\n%s\n\n" ,dataToBeRead,EstadoParaValidar);
            //printf( "\n%d\n%d\n\n" , strlen(dataToBeRead), strlen(EstadoParaValidar));

            if(strcmp(dataToBeRead,CursoParaValidar) == 0)
            {
                CursoValido = 1;
            }
            numero_de_linhas++; 
        }

        fclose(Arquivo_De_Alunos_Cadastrados) ; 
    }
return CursoValido;
}