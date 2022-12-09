Written Report File

//add all algorithms, their descriptions, what they accomplished, tests that were used to test them
--------Algorithms--------

ReadCSV Class:
    This class is used to read our csv files and represent them in a way that is easier to work with. Our ReadCSV object is used in both our BTree and Graph classes to help us create nodes.

    ReadCSV()-
        This is the default constructor for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with our current twitch (pre-downloaded) csv files if no other parameters are given. The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it.
    ReadCSV(parameters)-
        This is our constructor that allows us to implement different parameters for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with csv files provided in the parameters. This is where a csv file for edges and for streamer data can be added that are not the default ones (though we did not generally need this for our assignment). The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it.
    getFeatureVector()-
        This is our getter for our featureVector_ private variable. This is a double vector of strings that holds the data for each streamer_id we are working with.
    getMutuals()-
        This function constructs and returns a map that maps streamer_id's (the key), to a set of all the nodes that id is adjacent to (the value). It does this by running through our vector of pairs of our edges, and pushing mutual id's into the set of the id it is connected to. Originally we made a function that would run through this entire file every time we made a node for the BTree or the Graph, but the run time was MUCH too long, so we solved this by making a map one time, and from there we can access the edges in O(1) time for every node we create by just accessing the map. This function's output is assigned to the private variable mutualmap_ in the constructor for this object.
    fileToVecPair()-
        This function takes a csvfile of edges and converts it to a vector of pairs to return. This edges vector is later used to construct the mutualmap_ of connections.
    getSize()-
        This function returns the total size of our featureFile_ vector, which is also the amount of streamer id's that we have. This is just a simple getter to access size since we don't have access outside of the class to get private variables without this.
    getMutualMap()-
        This function returns our mutualmap_ private variable. This variable was earlier populated by getMutuals(), but since it is stored as a private variable, we don't have to rebuild the map every time we want to access the edges of our data conviniently. However, for outside classes to have access to this map, we have this getter to provide access to it.

BTree Class:
    This class is our tree representation of our data. We used this to sort and store our data in a way that is convenient to access. The nodes were sorted in order of viewership so we can access the data here based on viewcount per channel.

    BTreeNode::BTreeNode()-
        This is the default constructor for our BTree nodes. 
    BTreeNode::BTreeNode(parameters)-
        This is our parameterized constructor for the BTree nodes. The parameters pass in a streamer id and a ReadCSV object that has our file data. This initializes the id, viewcount, and language parameters for the node by pulling information from the ReadCSV objects featureVector. The mutual followers variable is initialized using the getMutualMap() function. The test case "BTreeNodes build corretly" tests the building of our nodes by checking a random node to see if all of the data is correct based on what we know needs to be the correct data from the csv file.
    BTreeNode::getId()-
        This function is the getter for the id value for the streamer whose node we are accessing. Returns the private int variable streamer_iden_.
    BTreeNode::getStreamerViews()-
        This function is the getter for the view count of the streamer whose node we are accessing. Returns the private int variable viewcount_.
    BTreeNode::getLanguage()-
        This function is the getter for the language of the streamer whose node we are accessing. Returns the private string variable languages_.
    BTreeNode::setStreamerData()-
        This function allows us to change or set the streamer data for a BTree node. It takes the streamer_id, the viewcount, and the language as parameters and changes the private variables that are in the BTree node.
    BTree(csvfile)-
        
    BTree(vector)-
    getBTree()-
    MergeSort()-
    MergeVectors()-

Graph Class:
    GraphNode()-
    getId()-
    getViews()-
    getLanguage()-
    setData()-
    Graph()-
    getGraph()-
    getMap()-

Data Class:
    Data()-
    file_to_nested_vector()-
    data_to_string()-
    split_string()-
    trim_right_side()-
    trim_left_side()-
    trim_all()-


//how was leading questions answered
--------Leading Questions--------