// Aqui (arquivo.h) deve estar todas as defini��es e declara��es
// Colocar apenas os prot�tipos das fun��es e n�o fun��es inline
class Ponto{
	public:
		int Lerx();
		void Fixarx(int);
		Ponto();
		Ponto(int);
		~Ponto();
	private:
		int x, y; // Apenas o m�todos privados podem acessar
		// essas vari�veis privadas

};
