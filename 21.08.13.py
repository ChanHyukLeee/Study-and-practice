# https://www.kaggle.com/learn/intro-to-machine-learning
"""
    we use panda as pd
    data = pd.read_csv(file_path)
    data.columns
    data = data.dropna(axis=0) # drop some missing value
    y = data.Price (price : column, save a price column data)
    x = data[features](features : list of columns)
    x.describe()
    x.head()
    model.fit(x,y) -> fit model created
    model.predict(x)
"""

"""
    Also from sklearn.metrics import mean_absoulte error
    we can calculate MAE
    But it is not enough, we use another data called 'validation data'
    So we need to split data -> 'val' 'Train' 'Test'

    Also when tree depth is shallow and fail to capture pattern is called 'underfitting'
    whereas when tree depth is too deep and 
        train data is almost perfect is called 'overfitting'
    Both lead to poor prediction
"""

# finally I got certificate form kaggle once again!
