

class Game {

    private:
        //....

    public:
        Game(); //constructor
        ~Game(); //destructor
        //need to be able to be called from main
        void Initialize();
        void Run();
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();

};